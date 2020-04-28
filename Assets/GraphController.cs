using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using ChartAndGraph;
using HoloToolkit.MRDL.PeriodicTable;
using System;
using System.Text;
using System.Globalization;
using System.Text.RegularExpressions;

public class GraphController : MonoBehaviour
{
    public GraphChart graph;
    public GameObject elementName;


    private List<List<float>> rawDataList;

    // Stores allNews and allStock objects for each
    public List<CompanyData> dataCopy = PeriodicTableLoader.allCompanyData;


    public void Start()
    {

        graph = GetComponent<GraphChart>();
        GraphChartBase graphBase = GetComponent<GraphChartBase>();
        TextMesh textObject = elementName.GetComponent<TextMesh>();

        foreach(CompanyData element in dataCopy)
        {
            Debug.Log(textObject.text);

            if(element.name == textObject.text)
            {
                ParseRawPricesData(element.allStock.data_intervals);
            }
        }

        graphBase.DataSource.StartBatch();  // start a new update batch

        //for (int i = 0; i < 30; i++)
        //{
        //    //add 30 random points , each with a category and an x,y value
        //    graphBase.DataSource.AddPointToCategory("Price", i, UnityEngine.Random.value * 10f);
        //}


        foreach (List<float> dataPoint in rawDataList)
        {
            graphBase.DataSource.AddPointToCategory("Price", dataPoint[0], dataPoint[1]);
            //Debug.Log(dataPoint[0]);
            //Debug.Log(dataPoint[1]);
        }

        graphBase.DataSource.EndBatch(); // end the update batch . this call will render the graph

    }

    public void OnEnable()
    {

    }

    private void Update()
    {

    }

    private void ParseRawPricesData(string rawPricesData)
    {
       // Debug.Log("raw prices data: " + rawPricesData);


        // If we don't have data for the stock
        if (rawPricesData == "DUMMY_INTERVAL")
        {
            rawDataList = new List<List<float>>(); //CSVReader.Read(inputfile);

            rawDataList.Add(new List<float> { 1.0f, 2.0f });
            rawDataList.Add(new List<float> { 2.0f, 3.0f });
            rawDataList.Add(new List<float> { 3.0f, 4.0f });
            rawDataList.Add(new List<float> { 4.0f, 5.0f });
            return;
        }

        int start_ind = rawPricesData.IndexOf("[{") + 2;
        rawPricesData = rawPricesData.Substring(start_ind);

        // Need to create a new list because we want to compute all the times relative to the starting time
        List<DateTime> timestampsList = new List<DateTime>();
        List<Dictionary<string, float>> parsedDataList = new List<Dictionary<string, float>>();

        string graphDataKey = "close"; // TODO 4. portion is pretty hard-coded

        foreach (string timestampBlock in rawPricesData.Split('}'))
        {
            var splitBlock = timestampBlock.Split('{');
            if (splitBlock.Length != 2)
            {
                break;
            }
            string timestamp = splitBlock[0];
            string dataAtTimestamp = splitBlock[1];

            //Debug.Log("timestamp: " + timestamp);
            //Debug.Log("data: " + dataAtTimestamp);

            timestampsList.Add(ParseTimestamp(timestamp));
            parsedDataList.Add(ParseDataAtTimestamp(dataAtTimestamp));
        }

        // NOTE we don't actually need to use this Dictionary<double, object> parsedData = new Dictionary<double, object>();
        rawDataList = new List<List<float>>();
        rawDataList.Add(new List<float> {0, parsedDataList[timestampsList.Count - 1][graphDataKey]}); // time, price

        for (int i = timestampsList.Count - 2; i >= 0; i--)
        {

            float timeInMinutes = Convert.ToSingle(timestampsList[i].Subtract(timestampsList[timestampsList.Count - 1]).TotalMinutes);
            if (timeInMinutes <= 420)
            {
                rawDataList.Add(new List<float> { timeInMinutes, parsedDataList[i][graphDataKey] }); // time, price
            }
        }
    }

    private static DateTime ParseTimestamp(string timestamp)
    {
        Regex r = new Regex(@"\d{4}-\d{2}-\d{2} \d{2}:\d{2}:\d{2}");
        Match m = r.Match(timestamp);//"\"2020-04-21 16:00:00\"");
        if (m.Success)
        {
            return DateTime.ParseExact(m.Value, "yyyy-MM-dd HH:mm:ss", CultureInfo.InvariantCulture);
        }
        else
        {
            throw new System.ArgumentException("Timestamp was parsed incorrectly", "timestamp");
        }
    }

    private static Dictionary<string, float> ParseDataAtTimestamp(string dataAtTimestamp)
    {
        Dictionary<string, float> parsedTimestampData = new Dictionary<string, float>();
        foreach (string pricePair in dataAtTimestamp.Split(','))
        {

            Regex keyRegex = new Regex(@"[a-zA-Z]+");
            Match keyMatch = keyRegex.Match(pricePair);
            //Debug.Log(keyMatch.Value);
            string key = keyMatch.Value;

            Regex priceRegex = new Regex(@"\d+.\d+");
            Match priceMatch = priceRegex.Match(pricePair);
            //Debug.Log(priceMatch.Value);

            float price = float.Parse(priceMatch.Value, System.Globalization.CultureInfo.InvariantCulture);
            parsedTimestampData.Add(key, price);
        }
        return parsedTimestampData;
    }
}