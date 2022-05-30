using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CountObjects : MonoBehaviour
{

    public GameObject TargetFound;
    public GameObject TurnOnTarget;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {

    }

    public void TurnOnNextObject()
    {
        if (TargetFound.activeSelf)
        {
            TurnOnTarget.SetActive(true);
        }

    }
}
