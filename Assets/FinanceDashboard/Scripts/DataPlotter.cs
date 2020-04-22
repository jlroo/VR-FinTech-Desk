using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using HoloToolkit.MRDL.PeriodicTable;

public class DataPlotter : MonoBehaviour {

  // List for holding data from CSV reader
  // private List<Dictionary<string, object>> rawDataList;
  private List<List<float>> rawDataList; //= new List<List<string>>();

  // Indices for columns to be assigned
  public int columnX = 0;
  public int columnY = 1;

  // Full column names
  public string xName;
  public string yName;

  public float plotScale = 10;

  // The prefab for the data points that will be instantiated
  public GameObject PointPrefab;

  // Object which will contain instantiated prefabs in hiearchy
  public GameObject PointHolder;

  public bool shouldDisplayGraph;
  
  private GameObject[] allPoints;

  // Use this for initialization
  void Start () {
    // NOTE WE INITIALIZE THE GRAPH ONE TIME IN START()
    // THEN, ALL WE HAVE TO DO IN UPDATE() IS SET THE SPHERES AS ACTIVE OR INACTIVE
    shouldDisplayGraph = false;
    
    // Set pointlist to results of function Reader with argument inputfile
    rawDataList = new List<List<float>>(); //CSVReader.Read(inputfile);

    rawDataList.Add(new List<float> { 1.0f, 2.0f});
    rawDataList.Add(new List<float> { 2.0f, 3.0f});
    rawDataList.Add(new List<float> { 3.0f, 4.0f});
    rawDataList.Add(new List<float> { 4.0f, 5.0f});

    // Declare list of strings, fill with keys (column names)
    List<string> columnList = new List<string> { "a", "b"};

    // Assign column name from columnList to Name variables
    xName = columnList[columnX];
    yName = columnList[columnY];

    // Get maxes of each axis
    float xMax = FindMaxValue(0);
    float yMax = FindMaxValue(1);

    // Get minimums of each axis
    float xMin = FindMinValue(0);
    float yMin = FindMinValue(1);

    allPoints = new GameObject[rawDataList.Count];
    //Loop through Pointlist
    for (var i = 0; i < rawDataList.Count; i++)
    {
      // Get value in poinList at ith "row", in "column" Name, normalize
      float x = 
        (System.Convert.ToSingle(rawDataList[i][0]) - xMin) 
        / (xMax - xMin);

      float y = 
        (System.Convert.ToSingle(rawDataList[i][1]) - yMin) 
        / (yMax - yMin);

      float z = 0.0f;
      // Instantiate as gameobject variable so that it can be manipulated within loop
      GameObject dataPoint = Instantiate(
          PointPrefab, 
          new Vector3(x, y, z)* plotScale, 
          Quaternion.identity);
      dataPoint.SetActive(false);

      // Make child of PointHolder object, to keep points within container in hiearchy
      dataPoint.transform.parent = PointHolder.transform;

      // Assigns original values to dataPointName
      string dataPointName = 
        rawDataList[i][0] + " " 
        + rawDataList[i][1];

      // Assigns name to the prefab
      dataPoint.transform.name = dataPointName;

      // Gets material color and sets it to a new RGB color we define
      dataPoint.GetComponent<Renderer>().material.color = 
        new Color(x,y,1.0f, 1.0f);

      allPoints[i] = dataPoint; // Cache this for later
    }       
  }

  public void Update() {
    for (var i = 0; i < allPoints.Length; i++) {
      allPoints[i].SetActive(shouldDisplayGraph);
    }
  }

  private float FindMaxValue(int axisInd)
  {
    //set initial value to first value
    float maxValue = Convert.ToSingle(rawDataList[0][axisInd]);

    //Loop through Dictionary, overwrite existing maxValue if new value is larger
    for (var i = 0; i < rawDataList.Count; i++)
    {
      if (maxValue < Convert.ToSingle(rawDataList[i][axisInd]))
        maxValue = Convert.ToSingle(rawDataList[i][axisInd]);
    }

    //Spit out the max value
    return maxValue;
  }

  private float FindMinValue(int axisInd)
  {

    float minValue = Convert.ToSingle(rawDataList[0][axisInd]);

    //Loop through Dictionary, overwrite existing minValue if new value is smaller
    for (var i = 0; i < rawDataList.Count; i++)
    {
      if (Convert.ToSingle(rawDataList[i][axisInd]) < minValue)
        minValue = Convert.ToSingle(rawDataList[i][axisInd]);
    }

    return minValue;
  }

}

