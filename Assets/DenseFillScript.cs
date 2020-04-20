using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using ChartAndGraph;
    
public class DenseFillScript : MonoBehaviour
{
    public GraphChartBase categoryPrefab;
private object[] mCategoryVisualStyle;

    // Start is called before the first frame update
    void Start()
    {
mCategoryVisualStyle = categoryPrefab.DataSource.StoreAllCategoriesinOrder();
categoryPrefab.DataSource.AddCategory("prefabCategory", null, 0, new MaterialTiling(), null, false, null, 0);
// set the visual style of the category to the one in the prefab
categoryPrefab.DataSource.RestoreCategory("prefabCategory", mCategoryVisualStyle[3]);

    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
