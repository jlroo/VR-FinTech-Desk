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
                rawDataList = element.allStock.rawDataList; //ParseRawPricesData(element.allStock.data_intervals);
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
}
