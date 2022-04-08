using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class touchInteraction : MonoBehaviour
{
    string btnName;
    public GameObject x;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.touchCount > 0 && Input.touches[0].phase == TouchPhase.Began)
        {
            Ray ray = Camera.main.ScreenPointToRay(Input.GetTouch(0).position);
            RaycastHit Hit;
            if (Physics.Raycast(ray, out Hit))
            {
                btnName = Hit.transform.name;
                switch (btnName)
                {
                    case "imgTarget_comic":
                        x = GameObject.Find("comicText");
                        if (x.activeSelf){
                            x.SetActive(false);
                        }
                        else { 
                            x.SetActive(true);
                        }
                        break;
                    case "imgTarget_picasso":
                        x = GameObject.Find("picassoText");
                        if (x.activeSelf)
                        {
                            x.SetActive(false);
                        }
                        else
                        {
                            x.SetActive(true);
                        }
                        break;
                    default:
                        break;
                }
            }

        }
    }
}
