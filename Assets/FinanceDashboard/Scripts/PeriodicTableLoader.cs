//
// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.
//
using Microsoft.MixedReality.Toolkit.Utilities;
using System.Collections.Generic;
using System.Collections;
using System.Text;
using System.Text.RegularExpressions;
// using System.Text.Json;
// using System.Text.Json.Serialization;
using System;

using UnityEngine;
using UnityEngine.Networking;

namespace HoloToolkit.MRDL.PeriodicTable
{

    ////////// FOR PARSING COMPANIES.JSON /////////
    [System.Serializable] 
    public class CompanyName { 
      public string stock_name;
      public string news_name;
    }

    [System.Serializable]
    public class CompanyNames {
        public List<CompanyName> names;

        public static CompanyNames FromJSON(string json) {
            return JsonUtility.FromJson<CompanyNames>(json);
            // JsonSerializer.Deserialize<WeatherForecast>(jsonString);
        }
    }

    ////////// FOR PARSING FROM THE NEWS API /////////
    [System.Serializable]
    public class CompanyNews {
      public string title;
      public string url;
      // TODO is there anything else we want to store?
     
      public CompanyNews() {
        title = "TITLE";
        url = "URL";
      }
  
      public string toString() {
        StringBuilder dataBuilder = new StringBuilder();
        dataBuilder.Append("Title: ");
        dataBuilder.AppendLine(title);
        dataBuilder.Append("Url: ");
        dataBuilder.AppendLine(url);
        return dataBuilder.ToString();
      }
    }

    // Top N news articles for a single a company
    [System.Serializable]
    public class AllNews {
      public List<CompanyNews> articles;
      public static int NUM_NEWS_ARTICLES = 3; // Number of news articles to store 

      public AllNews () {
        articles = new List<CompanyNews>();
        for (int i = 0; i < 10; i++) {
          articles.Add(new CompanyNews());
        }
      }

      public static AllNews FromJSON(string json) {
        // Debug.Log("JSON: " + json);
        AllNews allNews = JsonUtility.FromJson<AllNews>(json);
        // return JsonSerializer.Deserialize<AllNews>(json);
        // TODO allNews.articles.Take(num_articles);
        return allNews;
      }

      public string toString() { // Debugging
        StringBuilder dataBuilder = new StringBuilder();
        foreach (CompanyNews article in articles) {
          dataBuilder.AppendLine(article.toString());
        }
        return dataBuilder.ToString(); 
      }
    }
 
    ////////// FOR PARSING FROM THE NEWS API /////////
    // All stock prices for a single company
    [System.Serializable]
    public class MetaData {
      public string info;
      public string symbol;
      public string last_ref;
      public string interval;
      public string output_size;
      public string time_zone;

      public MetaData() {
        info = "INFO";
        symbol = "SYMBOL";
        last_ref = "LAST_REF";
        interval = "INTERVAL";
        output_size = "OUTPUT_SIZE";
        time_zone = "TIME_ZONE";
      }

      public static MetaData FromJSON(string json) {
        return JsonUtility.FromJson<MetaData>(json);
      }

      public string toString() { // Debugging
        StringBuilder dataBuilder = new StringBuilder();
        dataBuilder.Append("info: ");
        dataBuilder.AppendLine(info);
        return dataBuilder.ToString();
      }
    }

    [System.Serializable]
    public class AllStock {
      public MetaData metadata; 

      // IMPORTANT: We can't create a list of stock data at each time interval
      // because the data returned has timestamps as keys (meaning that all the keys
      // are different and we can't serach by keys) 
      public string data_intervals; 
      
      public AllStock() {
        metadata = new MetaData();
        data_intervals = "DUMMY_INTERVAL"; // TODO turn into real json data for graph gen!!
      }

      public static AllStock FromJSON(string json) {
        // NOTE must modify if we change the time series
        // Removing whitespace between keys
        json = json.Replace("Meta Data", "metadata").Replace("Time Series (5min)", "data_intervals");

        // Yeah, this is ugly but IDK a better way to do it and it works SO DON'T TOUCH IT
        // Metadata parsing
        AllStock allStock = new AllStock();

        json = json.Replace("1. Information", "info").Replace("2. Symbol", "symbol").
                    Replace("3. Last Refreshed", "last_ref").Replace("4. Interval", "interval").
                    Replace("5. Output Size", "output_size").Replace("6. Time Zone", "time_zone"); 
        allStock.metadata = MetaData.FromJSON(JsonHelper.GetJsonObject(json, "metadata"));

        // Breaking JSON string into different portions to make parsing work 
        allStock.data_intervals = JsonHelper.GetJsonObject(json, "data_intervals");
        return allStock;
      }

      public string toString() { // Debugging
        StringBuilder dataBuilder = new StringBuilder();
        dataBuilder.Append("metadata: ");
        dataBuilder.AppendLine(metadata.toString());
        dataBuilder.Append("data_intervals: ");
        dataBuilder.AppendLine("[" + data_intervals + "]");
        return dataBuilder.ToString();
      }
    } 

    public class CompanyData {
      public AllNews allNews;
      public AllStock allStock; 

      // NOTE using news_name (doesn't rlly matter whether we use stock_name or news_name)
      public string name;
      public string ticker_name;

      public int xpos; // From PeriodTableJSON.json -- value from 1 to 6 inclusive
      public static int xPosCurrVal = 1; // 1 - 6 inclusive
      public static int MAX_XPOS = 6;

      // Need to compute ypos using the number of companies we're displaying (I think) 
      public int ypos;
      public static int yPosCurrVal = 5; // 5 - x inclusive
      public static int yPosCounter = 0; // # of instances of CompanyData with yPos == yPosCurrVal

      // Value from 1 - typeMaterials.Count
      // Hard-coded because the UI is really hard-coded and we can't refactor out the category 
      // without breaking everything
      public string category;
      public static int currKeyCounter = 1; // 1 - typeMaterials.Count
      public static int currCategoryCounter = 1; // 1 - typeMaterials.Count

        public string spectral_img = "spectral";
        public string named_by = "named_by";
        public float density = 1.0f;
        public string color = "color";
        public float molar_heat = 1.0f;
        // public string symbol = "asfd";
        public string discovered_by = "disc_by";
        public string appearance = "app";
        public float atomic_mass = 1.0f;
        public float melt = 1.0f;
        // public string number = "num";
        public string source = "source";
        public int period = 2;
        public string phase = "phase";
        public string summary = "summ";
        public int boil = 3;

      public CompanyData(int numCompanies, Dictionary<string, int> typeMaterialsCounts) { 
        this.name = "DUMMY_COMPANY";
        this.ticker_name = "DMCMPY";

        allNews = new AllNews();
        allStock = new AllStock();
        setXYPositions(numCompanies);
        setCategory(typeMaterialsCounts);
      }

      public CompanyData(string name, string ticker_name, string newsJson, string stockJson,int numCompanies, Dictionary<string, int> typeMaterialsCounts) {
        // Debug.Log("Name: " + name + ", all news: " + newsJson);
        this.name = name;
        this.ticker_name = ticker_name;
        allNews = AllNews.FromJSON(newsJson);
        allStock = AllStock.FromJSON(stockJson);
        setXYPositions(numCompanies);  
        setCategory(typeMaterialsCounts);
      }

      // typeMaterialsCounts
      public void setCategory(Dictionary<string, int> typeMaterialsCounts) {
        // get current key
        category = "key" + Convert.ToString(currKeyCounter);

        if ((typeMaterialsCounts[category]) == 0) {
          currKeyCounter++; // Handles 0 case
          category = "key" + Convert.ToString(currKeyCounter);
        }

        currCategoryCounter++;
        // Debug.Log("VALUE: " + typeMaterialsCounts[category]);
        if (currCategoryCounter == typeMaterialsCounts[category] + 1) {
          currKeyCounter++;
          currCategoryCounter = 1;
        }
      }

      private void setXYPositions(int numCompanies) {
        xpos = xPosCurrVal;
        xPosCurrVal++;
        if (xPosCurrVal == MAX_XPOS + 1) {
          xPosCurrVal = 1;
        }

        // Compute the # of ypos positions we need 
        // Keep yPos until we reach ceil(numCompanies / MAX_XPOS) instances of 
        // CompanyData with yPos == yPosCurrVal
        if (yPosCounter == Math.Ceiling((double)(numCompanies / MAX_XPOS))){
          yPosCurrVal++;
          yPosCounter = 1;
        } else {
          yPosCounter++;
        }
        ypos = yPosCurrVal;
      }
      
      public string toString() { // Debugging
        // return "news: " + allNews.toString() + "\nstock: " + allStock.toString() + "\nkey: " + category;
        return "key: " + category;
      }
    }

    [System.Serializable]
    public class ElementData
    {
        public string name;
        public string category;
        public string spectral_img;
        public int xpos;
        public int ypos;
        public string named_by;
        public float density;
        public string color;
        public float molar_heat;
        public string symbol;
        public string discovered_by;
        public string appearance;
        public float atomic_mass;
        public float melt;
        public string number;
        public string source;
        public int period;
        public string phase;
        public string summary;
        public int boil;
    }

    [System.Serializable]
    class ElementsData
    {
        public List<ElementData> elements;

        public static ElementsData FromJSON(string json)
        {
            return JsonUtility.FromJson<ElementsData>(json);
        }
    }

    public class Response {
        public string result = "";
    }

    public class PeriodicTableLoader : MonoBehaviour
    {
        // What object to parent the instantiated elements to
        public Transform Parent;

        // Generic element prefab to instantiate at each position in the table
        public GameObject ElementPrefab;

        // How much space to put between each element prefab
        public float ElementSeperationDistance;

        // Legend
        public Transform LegendTransform;

        public GridObjectCollection Collection;

        public Material MatAlkaliMetal;
        public Material MatAlkalineEarthMetal;
        public Material MatTransitionMetal;
        public Material MatMetalloid;
        public Material MatDiatomicNonmetal;
        public Material MatPolyatomicNonmetal;
        public Material MatPostTransitionMetal;
        public Material MatNobleGas;
        public Material MatActinide;
        public Material MatLanthanide;

        // Stores list of parsed company data from APIs
        public static List <CompanyData> allCompanyData;

        private Dictionary<string, Material> typeMaterials;
        // This is a HARD-CODED dictionary that stores the frequencies of categories corresponding 
        // to the new keys in the typeMaterials dict 
        // DO NOT MODIFY THIS UNLESS YOU KNOW WHAT YOU'RE DOING 
        private Dictionary<string, int> typeMaterialsCounts;

        private bool isFirstRun = true;

        private void Start()
        {
            InitializeData();
        }

        // https://stackoverflow.com/questions/44682376/unity-waiting-for-http-request-to-resolve
        private IEnumerator SendParallelApiRequest(Response res, string url)
        {
          UnityWebRequest www = UnityWebRequest.Get(url);
          yield return www.SendWebRequest();

          while (!www.isDone) {
            yield return true;
          }
          if (www.isNetworkError || www.isHttpError) {
            res.result = www.error;
          }
          else {
            res.result = www.downloadHandler.text;
          }
        }

        private string GetDataFromAPI(string url) {
          // Debug.Log("URL: " + url);
          Response result = new Response();
          IEnumerator e = SendParallelApiRequest(result, url);

          // blocks here until UnityWebRequest() completes
          while (e.MoveNext());
          // Debug.Log("Finished");
          return result.result;
        }

        private void GetRealTimeData() {
            // Parse the elements out of the json file
            string COMPANY_NAMES = "JSON/companies";
            TextAsset companyNamesAsset = Resources.Load<TextAsset>(COMPANY_NAMES);
            List<CompanyName> companyNames = CompanyNames.FromJSON(companyNamesAsset.text).names;

            // Get today's news
            string current_date = DateTime.Now.ToString("yyyy-MM-dd");
            Debug.Log("The current date is" + current_date);

            string NEWS_API_KEY = "c334b33f1acf4ba99b89dcc0bf595dd0";
            string NEWS_DATA_URL_FRONT = "http://newsapi.org/v2/everything?q="; // Concat name
            string NEWS_DATA_URL_BACK = "&from=" + current_date + "&sortBy=popularity&apiKey=" + NEWS_API_KEY;

            string STOCK_API_KEY = "B8LDV7QLIQNLCG1Y";
            string STOCK_DATA_URL_FRONT = "https://www.alphavantage.co/query?function=TIME_SERIES_INTRADAY&symbol="; // Concat name 
            string STOCK_DATA_URL_BACK = "&interval=5min&apikey=" + STOCK_API_KEY;

            // Stores company data
            allCompanyData = new List<CompanyData>();

            int counter = 0; 
            foreach (CompanyName companyName in companyNames) {
              // Debug.Log("COMPANY NAME: " + companyName.news_name);

              if (counter < 5) {
                Debug.Log("Query: " + NEWS_DATA_URL_FRONT + companyName.news_name + NEWS_DATA_URL_BACK);
                string newsData = GetDataFromAPI(NEWS_DATA_URL_FRONT + companyName.news_name + NEWS_DATA_URL_BACK);
                string stockData = GetDataFromAPI(STOCK_DATA_URL_FRONT + companyName.stock_name + STOCK_DATA_URL_BACK);

                CompanyData companyData = new CompanyData(companyName.news_name, companyName.stock_name, newsData, stockData, companyNames.Count, typeMaterialsCounts);
                Debug.Log("COMPANY DATA, name: " + companyName.news_name + ", " + companyData.toString());
                allCompanyData.Add(companyData);

              } else { // Create a dummy object for now 
                CompanyData companyData = new CompanyData(companyNames.Count, typeMaterialsCounts);
                allCompanyData.Add(companyData);
                // Debug.Log("COMPANY DATA, name: " + companyName.news_name + ", " + companyData.toString());
              }
              counter++;
            }
        }

        public void InitializeData()
        {
            //if (Collection.transform.childCount > 0)
            //    return;

            // TODO comment out later
            //TextAsset asset = Resources.Load<TextAsset>("JSON/PeriodicTableJSON");
            //List<ElementData> elements = ElementsData.FromJSON(asset.text).elements;
            //Debug.Log(elements.Count);

            // NOTE the dictionary here HARD CODES THE POSITIONS OF THE ELEMENTS and cannot be
            // changed in any way. Notice that I just have dummy values for the keys but you 
            // CANNOT delete any of the keys without breaking everything
            typeMaterials = new Dictionary<string, Material>()
        {
            { "key1", MatAlkaliMetal },
            { "key2", MatAlkalineEarthMetal },
            { "key3", MatTransitionMetal },
            { "key4", MatMetalloid },
            { "key5", MatDiatomicNonmetal },
            { "key6", MatPolyatomicNonmetal },
            { "key7", MatPostTransitionMetal },
            { "key8", MatNobleGas },
            { "key9", MatActinide },
            { "key10", MatLanthanide }
        };

            /** (Based off of original JSON) 
              [alkali metal] 1
              [alkaline earth metal] 1
              [transition metal] 11
              [metalloid] 6
              [diatomic nonmetal] 1
              [polyatomic nonmetal] 0
              [post-transition metal] 3
              [noble gas] 3
              [actinide] 4
              [lanthanide] 7
            */
            typeMaterialsCounts = new Dictionary<string, int>()
        {
            { "key1", 1 },
            { "key2", 1 },
            { "key3", 11 },
            { "key4", 6 },
            { "key5", 1 },
            { "key6", 0 },
            { "key7", 3 },
            { "key8", 3 },
            { "key9", 4 },
            { "key10", 7 }
        };

            GetRealTimeData();

            // TODO change elements to CompanyData
            if (isFirstRun == true)
            {
                // Insantiate the element prefabs in their correct locations and with correct text
                foreach (CompanyData element in allCompanyData)
                {
                    GameObject newElement = Instantiate<GameObject>(ElementPrefab, Parent);
                    newElement.GetComponentInChildren<Element>().SetFromElementData(element, typeMaterials);
                    newElement.transform.localPosition = new Vector3(element.xpos * ElementSeperationDistance - ElementSeperationDistance * 18 / 2, ElementSeperationDistance * 9 - element.ypos * ElementSeperationDistance, 2.0f);
                    newElement.transform.localRotation = Quaternion.identity;
                }

                isFirstRun = false;
            }
            else
            {
                int i = 0;
                // Update position and data of existing element objects
                foreach(Transform existingElementObject in Parent)
                {
                    existingElementObject.parent.GetComponentInChildren<Element>().SetFromElementData(allCompanyData[i], typeMaterials);
                    existingElementObject.localPosition = new Vector3(allCompanyData[i].xpos * ElementSeperationDistance - ElementSeperationDistance * 18 / 2, ElementSeperationDistance * 9 - allCompanyData[i].ypos * ElementSeperationDistance, 2.0f);
                    existingElementObject.localRotation = Quaternion.identity;
                    i++;
                }
                Parent.localPosition = new Vector3(0.0f, -0.7f, 0.7f);
                LegendTransform.localPosition = new Vector3(0.0f, 0.15f, 1.8f);

            }
        }
    }
}

