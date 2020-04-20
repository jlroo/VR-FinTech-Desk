using System.Collections;
using System.Collections.Generic;
using UnityEngine;

using HoloToolkit.MRDL.PeriodicTable;
using ChartAndGraph;

public class GraphChartController : MonoBehaviour
{
  private GraphChart graph;
  void Start ()
  {
    Debug.Log("graph is starting up!");
    graph = GetComponent<GraphChart>();

    if (graph != null)
    {

if(graph.DataSource.HasCategory("Player1")) Debug.Log("has payer 1"); else Debug.Log("does not have player1");
if(graph.DataSource.HasCategory("Player2")) Debug.Log("has payer 2"); else Debug.Log("does not have player2");

      graph.DataSource.StartBatch();  // start a new update batch
      graph.DataSource.ClearCategory("Player1");  // clear the categories we have created in the inspector
      graph.DataSource.ClearCategory("Player2");
      for (int i = 0; i < 30; i++)
      {
        //add 30 random points , each with a category and an x,y value
        graph.DataSource.AddPointToCategory("Player1",i, i);//Random.value*10f,Random.value*10f);
        graph.DataSource.AddPointToCategory("Player2", i,i);//Random.value * 10f, Random.value * 10f);
      }
      graph.DataSource.EndBatch(); // end the update batch . this call will render the graph
      Debug.Log("finished");
    }
  }
}
