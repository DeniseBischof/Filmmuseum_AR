using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CountObjects : MonoBehaviour
{

    public GameObject TargetFound;
    public GameObject TurnOnNextImageTarget;
    public GameObject[] ObjectsToTurnOn;

    public GameObject ButtonBig;
    public GameObject ButtonSmall;

    public GameObject ClueText;

    private bool itemFound = false;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {

    }

    public void TurnOnNextImageMarker()
    {
        if (TargetFound.activeSelf)
        {
            TurnOnNextImageTarget.SetActive(true);
        }

    }

    // called by Unity when the game starts
    public void TurnOnObjects()
    {
        foreach (GameObject obj in ObjectsToTurnOn)
        {
            obj.SetActive(true);
        }
    }

    public void TurnOffObjects()
    {
        foreach (GameObject obj in ObjectsToTurnOn)
        {
            obj.SetActive(false);
        }
    }

    public void ShowClue()
    {
        if (!itemFound)
        {
            ClueText.SetActive(true);
        }
        else
        {
            TurnOffObjects();
            ButtonBig.SetActive(false);
            ButtonSmall.SetActive(true);
        }
    }

    public void ItemBoolTrue()
    {
        itemFound = true;
    }

    public void ItemBoolFalse()
    {
        itemFound = false;
    }
}


