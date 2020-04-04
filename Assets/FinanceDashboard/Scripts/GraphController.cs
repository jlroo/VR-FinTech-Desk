using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GraphController : MonoBehaviour {
  public bool isChanged = false;

  void Start() {
    Debug.Log("START" + isChanged);

    HoloToolkit.MRDL.PeriodicTable.Element ParentScript = GetComponentInParent<HoloToolkit.MRDL.PeriodicTable.Element>();
    if (ParentScript == null) Debug.Log("PARENT SCRIPT IS NULL"); else Debug.Log("PARENT SCRIPT IS NOT NULL");
  
    string text = ParentScript.data.name;
    Debug.Log("TEXT: " + text);

    ChartAndGraph.GraphChart graph = GetComponent<ChartAndGraph.GraphChart>();
    if (graph != null) {
      Debug.Log("Graph is NOT null");
    } else {
      Debug.Log("Graph is null");
    }
  }

  public void OnEnable() {
  }

  public void Update() {
  }
}
