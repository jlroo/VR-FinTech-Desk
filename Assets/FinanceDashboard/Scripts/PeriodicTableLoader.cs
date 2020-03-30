//
// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.
//
using Microsoft.MixedReality.Toolkit.Utilities;
using System.Collections.Generic;
using System.Collections;
using UnityEngine;
using UnityEngine.Networking;

namespace HoloToolkit.MRDL.PeriodicTable
{

    [System.Serializable] 
    class CompanyName { 
      public string name;
    }

    [System.Serializable]
    class CompanyNames {
        public List<CompanyName> names;

        public static CompanyNames FromJSON(string json) {
            return JsonUtility.FromJson<CompanyNames>(json);
        }
    }

    [System.Serializable]
    class CompanyNews {
      public string title;
      public string url;
      // TODO not sure if we want to store anything else 
    }

    // All news pertaining to a company
    [System.Serializable]
    class AllNews {
      public List<CompanyNews> allNews;

      public static AllNews FromJSON(string json) {
          return JsonUtility.FromJson<AllNews>(json);
      }
    }
  
    // <> Adjusted Time Series
    [System.Serializable]
    class CompanyStock {
      public string date;

      /* Example: 
            "1. open": "94.6000",
            "2. high": "113.1500",
            "3. low": "90.5600",
            "4. close": "108.0300",
            "5. adjusted close": "108.0300",
            "6. volume": "39907532",
            "7. dividend amount": "0.0000" 
      */
      public string raw_data;
      // TODO not storing metadata?
    }

    // All stock prices within a set amount of time
    [System.Serializable]
    class AllStock {
      public List<CompanyStock> allStock;

      public static AllStock FromJSON(string json) {
          return JsonUtility.FromJson<AllStock>(json);
      } 
    } 

    // [System.Serializable]
    class CompanyData {
      public AllNews allNews;
      public AllStock allStock; 
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

public class Response
{
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
          Response result = new Response();
          IEnumerator e = SendParallelApiRequest(result, url);

          // blocks here until UnityWebRequest() completes
          while (e.MoveNext()) Debug.Log("WAITING");
          Debug.Log("completed");
          Debug.Log(result.result);
          return result.result;
        }

        private void GetRealTimeData() {
            // Parse the elements out of the json file
            string COMPANY_NAMES = "JSON/companies"; 
            TextAsset companyNamesAsset = Resources.Load<TextAsset>(COMPANY_NAMES);
            List<CompanyName> companyNames = CompanyNames.FromJSON(companyNamesAsset.text).names;

            string NEWS_API_KEY = "c334b33f1acf4ba99b89dcc0bf595dd0";
            string NEWS_DATA_URL_FRONT = "http://newsapi.org/v2/everything?q="; // Concat name
            string NEWS_DATA_URL_BACK = "&from=2020-03-29&sortBy=popularity&apiKey=" + NEWS_API_KEY;
            string STOCK_DATA_URL_FRONT = "https://www.alphavantage.co/query?function=TIME_SERIES_INTRADAY&symbol="; // Concat name 
            string STOCK_DATA_URL_BACK = "&interval=5min&apikey=demo";

            // Stores company data
            List <CompanyData> allCompanyData = new List<CompanyData>();

            // Iterate through them and make 2 API calls
            foreach (CompanyName companyName in companyNames) {
              string name = companyName.name;
              Debug.Log(name); 

              string news_data = GetDataFromAPI(NEWS_DATA_URL_FRONT + name + NEWS_DATA_URL_BACK);
              string stock_data = GetDataFromAPI(STOCK_DATA_URL_FRONT + name + STOCK_DATA_URL_BACK);
            }
        }

        public void InitializeData()
        {
            //if (Collection.transform.childCount > 0)
            //    return;
            GetRealTimeData();

            // TODO comment out later
            TextAsset asset = Resources.Load<TextAsset>("JSON/PeriodicTableJSON");
            List<ElementData> elements = ElementsData.FromJSON(asset.text).elements;
            Debug.Log(elements.Count);

            Dictionary<string, Material> typeMaterials = new Dictionary<string, Material>()
        {
            { "alkali metal", MatAlkaliMetal },
            { "alkaline earth metal", MatAlkalineEarthMetal },
            { "transition metal", MatTransitionMetal },
            { "metalloid", MatMetalloid },
            { "diatomic nonmetal", MatDiatomicNonmetal },
            { "polyatomic nonmetal", MatPolyatomicNonmetal },
            { "post-transition metal", MatPostTransitionMetal },
            { "noble gas", MatNobleGas },
            { "actinide", MatActinide },
            { "lanthanide", MatLanthanide },
        };


            if (isFirstRun == true)
            {
                // Insantiate the element prefabs in their correct locations and with correct text
                foreach (ElementData element in elements)
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
                    existingElementObject.parent.GetComponentInChildren<Element>().SetFromElementData(elements[i], typeMaterials);
                    existingElementObject.localPosition = new Vector3(elements[i].xpos * ElementSeperationDistance - ElementSeperationDistance * 18 / 2, ElementSeperationDistance * 9 - elements[i].ypos * ElementSeperationDistance, 2.0f);
                    existingElementObject.localRotation = Quaternion.identity;
                    i++;
                }
                Parent.localPosition = new Vector3(0.0f, -0.7f, 0.7f);
                LegendTransform.localPosition = new Vector3(0.0f, 0.15f, 1.8f);

            }
        }
    }
}
