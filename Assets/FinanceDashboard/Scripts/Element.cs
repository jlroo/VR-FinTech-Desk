//
// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.
//

using ChartAndGraph; //Chart_And_Graph;

using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace HoloToolkit.MRDL.PeriodicTable
{
    public class Element : MonoBehaviour
    {
        public static Element ActiveElement;

        public TextMesh ElementNumber;
        public TextMesh ElementName;
        public TextMesh ElementNameDetail;

        public TextMeshProUGUI ElementDescription;
        public Text DataAtomicNumber;
        public Text DataAtomicWeight;
        public Text DataMeltingPoint;
        public Text DataBoilingPoint;

        public Renderer BoxRenderer;
        public MeshRenderer[] PanelSides;
        public MeshRenderer PanelFront;
        public MeshRenderer PanelBack;
        public MeshRenderer[] InfoPanels;

        public Atom Atom;

        [HideInInspector]
        public CompanyData data;

        private BoxCollider boxCollider;
        private Material highlightMaterial;
        private Material dimMaterial;
        private Material clearMaterial;
        private PresentToPlayer present;

        public GameObject graph;
        //public ChartAndGraph.GraphChart graph; 
        public static int counter = 0;

        public void SetActiveElement()
        {
            Element element = gameObject.GetComponent<Element>();
            ActiveElement = element;
        }

        public void ResetActiveElement()
        {
            ActiveElement = null;
        }

        public void Start()
        {
            Debug.Log("COUNTER: " + counter);
            counter++;
            //graph = GetComponent<ChartAndGraph.GraphChart>();
            if (graph == null) Debug.Log("GRAPH IS NULL"); else Debug.Log("GRAPH ISN'T NULL");

            // Turn off our animator until it's needed
            GetComponent<Animator>().enabled = false;
            BoxRenderer.enabled = true;
            present = GetComponent<PresentToPlayer>();
        }

        public void Open()
        {
            if (present.Presenting)
                return;

            StartCoroutine(UpdateActive());
        }

        public void Highlight()
        {
            if (ActiveElement == this)
                return;

            for (int i = 0; i < PanelSides.Length; i++)
            {
                PanelSides[i].sharedMaterial = highlightMaterial;
            }
            PanelBack.sharedMaterial = highlightMaterial;
            PanelFront.sharedMaterial = highlightMaterial;
            BoxRenderer.sharedMaterial = highlightMaterial;
        }

        public void Dim()
        {
            if (ActiveElement == this)
                return;

            for (int i = 0; i < PanelSides.Length; i++)
            {
                PanelSides[i].sharedMaterial = dimMaterial;
            }
            PanelBack.sharedMaterial = dimMaterial;
            PanelFront.sharedMaterial = dimMaterial;
            BoxRenderer.sharedMaterial = dimMaterial;
        }

        public IEnumerator UpdateActive()
        {
            present.Present();

            while (!present.InPosition)
            {
                // Wait for the item to be in presentation distance before animating
                yield return null;
            }

            // Start the animation
            Animator animator = gameObject.GetComponent<Animator>();
            animator.enabled = true;
            animator.SetBool("Opened", true);

            //Color elementNameColor = ElementName.GetComponent<MeshRenderer>().material.color;

            while (Element.ActiveElement == this)
            {
                //ElementName.GetComponent<MeshRenderer>().material.color = elementNameColor;
                // Wait for the player to send it back
                yield return null;
            }

            animator.SetBool("Opened", false);

            yield return new WaitForSeconds(0.66f); // TODO get rid of magic number        

            // Return the item to its original position
            present.Return();
            Dim();
        }


        /**
         * Set the display data for this element based on the given parsed JSON data
         */
        public void SetFromElementData(CompanyData data, Dictionary<string, Material> typeMaterials)
        {
            Debug.Log("CALLING SET FROM ELEMENT DATA!!!");
            this.data = data;
            ElementName.text = data.name;

            ElementDescription.text = data.allNews.articles[0].toString(); // TODO change to news

            // EVERYTHING IN THE RHS
            // DataAtomicNumber.text = data.number;
            //DataAtomicWeight.text = data.atomic_mass.ToString();
            //DataMeltingPoint.text = data.melt.ToString();
            //DataBoilingPoint.text = data.boil.ToString();
        /*if (graph == null) 
        {
            graph = GetComponent<ChartAndGraph.GraphChart>();
            if (graph == null) Debug.Log("GRAPH IS STILL NULL"); else Debug.Log("GRAPH ISN'T NULL ANYMORE");
        }
        
            graph.DataSource.StartBatch();  // start a new update batch
            graph.DataSource.ClearCategory("Player 1");  // clear the categories we have created in the inspector
            graph.DataSource.ClearCategory("Player 2");
            for (int i = 0; i < 30; i++)
            {
//add 30 random points , each with a category and an x,y value
                graph.DataSource.AddPointToCategory("Player 1",Random.value*10f,Random.value*10f);
                graph.DataSource.AddPointToCategory("Player 2", Random.value * 10f, Random.value * 10f);
            }
            graph.DataSource.EndBatch(); // end the update batch . this call will render the graph
            Debug.Log("UPDATED THE GRAPH");
 */
            // Set up our materials
            if (!typeMaterials.TryGetValue(data.category.Trim(), out dimMaterial))
            {
                Debug.Log("Couldn't find " + data.category.Trim() + " in element " + data.name);
            }

            // Create a new highlight material and add it to the dictionary so other can use it
            string highlightKey = data.category.Trim() + " highlight";
            if (!typeMaterials.TryGetValue(highlightKey, out highlightMaterial))
            {
                highlightMaterial = new Material(dimMaterial);
                highlightMaterial.color = highlightMaterial.color * 1.5f;
                typeMaterials.Add(highlightKey, highlightMaterial);
            }

            Dim();
           
            /*Atom.NumElectrons = int.Parse(data.number);
            Atom.NumNeutrons = (int)data.atomic_mass / 2;
            Atom.NumProtons = (int)data.atomic_mass / 2;
            Atom.Radius = data.atomic_mass / 157 * 0.02f;//TEMP*/

            foreach (Renderer infoPanel in InfoPanels)
            {
                // Copy the color of the element over to the info panels so they match
                infoPanel.material.color = dimMaterial.color;
            }

            BoxRenderer.enabled = false;

            // Set our name so the container can alphabetize
            transform.parent.name = data.name;
        }
    }
}

