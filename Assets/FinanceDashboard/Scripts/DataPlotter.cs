using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using HoloToolkit.MRDL.PeriodicTable;
using System.Text;
using System.Globalization;
using System.Text.RegularExpressions;

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

  // Initialize only when the data is upated in real time and not once per frame
  public bool shouldInitializeGraph;

  public AllStock currentStockData; 

  /*public float xMin = 0.0f;
    public float xMax = 2.0f;

    public float yMin = 0.0f;
    public float yMax = 2.0f; 
   */
  public float zVal = 0.0f;

  // True when it's been init at least once
  public bool hasGraphBeenInitOnce = false;

  private GameObject[] allPoints;

  public string name; // for debugging

  void Start () {
    //shouldInitializeGraph = false;

    //currentStockData = null;

    //zVal = transform.position.z;

    // ALL WE HAVE TO DO IN UPDATE() IS SET THE SPHERES AS ACTIVE OR INACTIVE
    shouldDisplayGraph = false;

    // Set pointlist to results of function Reader with argument inputfile
    /*rawDataList = new List<List<float>>(); //CSVReader.Read(inputfile);

      rawDataList.Add(new List<float> { 1.0f, 2.0f});
      rawDataList.Add(new List<float> { 2.0f, 3.0f});
      rawDataList.Add(new List<float> { 3.0f, 4.0f});
      rawDataList.Add(new List<float> { 4.0f, 5.0f});*/
  }

  public void Update() {
    Debug.Log("name: " + name + ", shouldInitializeGraph: " + shouldInitializeGraph);
    if (shouldInitializeGraph){
      Debug.Log("init graph");
      InitializeGraph();
      shouldInitializeGraph = false;
    }

    if (hasGraphBeenInitOnce) {
      for (var i = 0; i < allPoints.Length; i++) {
        allPoints[i].SetActive(shouldDisplayGraph);
      }
    }
  }

  // Build graph, set all data points as inactive until we want to display the graph
  private void InitializeGraph() {
    hasGraphBeenInitOnce = true;

    // Need to get the CompanyData first
    // TODO need to update the graph when the data is updated in real time
    Debug.Log(currentStockData == null);
    ParseRawPricesData(currentStockData.data_intervals);

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

      // Instantiate as gameobject variable so that it can be manipulated within loop
      GameObject dataPoint = Instantiate(
          PointPrefab, 
          new Vector3(x, y, zVal)* plotScale,
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

  private void ParseRawPricesData(string rawPricesData) {			
    Debug.Log("raw prices data: " + rawPricesData);

    if (rawPricesData == "DUMMY_INTERVAL"){
      rawDataList = new List<List<float>>(); //CSVReader.Read(inputfile);

      rawDataList.Add(new List<float> { 1.0f, 2.0f});
      rawDataList.Add(new List<float> { 2.0f, 3.0f});
      rawDataList.Add(new List<float> { 3.0f, 4.0f});
      rawDataList.Add(new List<float> { 4.0f, 5.0f});
      return;
    }

    int start_ind = rawPricesData.IndexOf("[{") + 2;
    rawPricesData = rawPricesData.Substring(start_ind);

    // Need to create a new list because we want to compute all the times relative to the starting time
    List<DateTime> timestampsList = new List<DateTime>(); 
    List<Dictionary<string, float>> parsedDataList = new List<Dictionary<string, float>>(); 

    string graphDataKey = "close"; // TODO 4. portion is pretty hard-coded

    foreach (string timestampBlock in rawPricesData.Split('}')) {
      var splitBlock = timestampBlock.Split('{');
      if (splitBlock.Length != 2){
        break;
      }
      string timestamp = splitBlock[0];
      string dataAtTimestamp = splitBlock[1];			

      Debug.Log("timestamp: " + timestamp);
      Debug.Log("data: " + dataAtTimestamp);

      timestampsList.Add(ParseTimestamp(timestamp));
      parsedDataList.Add(ParseDataAtTimestamp(dataAtTimestamp));
    }

    // NOTE we don't actually need to use this Dictionary<double, object> parsedData = new Dictionary<double, object>();
    rawDataList = new List<List<float>>();
    rawDataList.Add(new List<float> {0, parsedDataList[0][graphDataKey]} ); // time, price

    for (int i = 1; i < timestampsList.Count; i++) {
      float timeInSeconds = Convert.ToSingle(timestampsList[i].Subtract(timestampsList[i - 1]).TotalSeconds);
      rawDataList.Add(new List<float> {timeInSeconds, parsedDataList[i][graphDataKey]} ); // time, price
    } 
  }

  private static DateTime ParseTimestamp(string timestamp) {
    Regex r = new Regex(@"\d{4}-\d{2}-\d{2} \d{2}:\d{2}:\d{2}");
    Match m = r.Match(timestamp);//"\"2020-04-21 16:00:00\"");
    if(m.Success){
      return DateTime.ParseExact(m.Value, "yyyy-MM-dd HH:mm:ss", CultureInfo.InvariantCulture);
    } else {
      throw new System.ArgumentException("Timestamp was parsed incorrectly","timestamp");
    }
  }

  private static Dictionary<string, float> ParseDataAtTimestamp(string dataAtTimestamp) {
    Dictionary<string, float> parsedTimestampData = new Dictionary<string, float>();
    foreach (string pricePair in dataAtTimestamp.Split(',')){

      Regex keyRegex = new Regex(@"[a-zA-Z]+");
      Match keyMatch = keyRegex.Match(pricePair);
      Debug.Log(keyMatch.Value);
      string key = keyMatch.Value;

      Regex priceRegex = new Regex(@"\d+.\d+");
      Match priceMatch = priceRegex.Match(pricePair);
      Debug.Log(priceMatch.Value);

      float price = float.Parse(priceMatch.Value, System.Globalization.CultureInfo.InvariantCulture);
      parsedTimestampData.Add(key, price);
    }
    return parsedTimestampData;
  }
}
