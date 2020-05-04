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

        if(textObject.text == "DUMMY_COMPANY")
        {
            return;
        }

        foreach(CompanyData element in dataCopy)
        {
            Debug.Log(textObject.text);

            if(element.name == textObject.text)
            {
                rawDataList = element.allStock.rawDataList; //ParseRawPricesData(element.allStock.data_intervals);
            }
        }

        graphBase.DataSource.StartBatch();  // start a new update batch

        // 9:30 AM in seconds from 12:00 AM
        int start_time = (9*60 + 30)*60;
        foreach (List<float> dataPoint in rawDataList)
        {
            graphBase.DataSource.AddPointToCategory("Price", start_time + 60*dataPoint[0], dataPoint[1]);
        }

        graphBase.DataSource.EndBatch(); // end the update batch . this call will render the graph

    }

    public void OnEnable()
    {

    }

    private void Update()
    {

    }
}
