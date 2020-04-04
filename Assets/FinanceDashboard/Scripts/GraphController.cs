using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using ChartAndGraph;
using HoloToolkit.MRDL.PeriodicTable;

public class GraphController : MonoBehaviour {
  public Element parentElement;
  public GraphChart graph;

  private void setParentElement() {
    if (parentElement == null) {
      parentElement = GetComponentInParent<Element>();
    }
    if (parentElement == null) Debug.Log("PARENT SCRIPT IS NULL"); else Debug.Log("PARENT SCRIPT IS NOT NULL");
  }

  public void Start() {
    setParentElement();

    string text = parentElement.data.name;
    Debug.Log("TEXT: " + text);

    graph = GetComponent<GraphChart>();
    if (graph != null) {
      Debug.Log("Graph is NOT null");
    } else {
      Debug.Log("Graph is null");
    }
    // graph.InternalGenerateChart(); // Keys are player1 and player2
  }

  public void OnEnable() {
    setParentElement();

    string text = parentElement.data.name;
    Debug.Log("OnEnable: " + text);
  }

  private void Update() {
    string text = parentElement.data.name;
    Debug.Log("Update: " + text);

    graph.DataSource.StartBatch();  // start a new update batch
    // graph.DataSource.ClearCategory("Player 1");  // clear the categories we have created in the inspector
    // graph.DataSource.ClearCategory("Player 2");
    for (int i = 0; i < 30; i++)
    {
      //add 30 random points , each with a category and an x,y value
      graph.DataSource.AddPointToCategory("Player 1",i, i);//Random.value*10f,Random.value*10f);
      graph.DataSource.AddPointToCategory("Player 2", i, i);//Random.value * 10f, Random.value * 10f);
    }
    graph.DataSource.EndBatch(); // end the update batch . this call will render the graph
  }
}
