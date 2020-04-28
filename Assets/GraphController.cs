using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using ChartAndGraph;
using HoloToolkit.MRDL.PeriodicTable;

public class GraphController : MonoBehaviour
{
    public GraphChart graph;



    public void Start()
    {

        graph = GetComponent<GraphChart>();
        GraphChartBase graphBase = GetComponent<GraphChartBase>();

        graphBase.DataSource.StartBatch();  // start a new update batch

        for (int i = 0; i < 30; i++)
        {
            //add 30 random points , each with a category and an x,y value
            graphBase.DataSource.AddPointToCategory("Price", i, Random.value * 10f);//Random.value*10f,Random.value*10f);
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