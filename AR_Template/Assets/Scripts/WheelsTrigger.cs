using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WheelsTrigger : MonoBehaviour
{

    public string moveToTarget = " ";

    public GameObject nextBodyPart;
    public GameObject oldWheel;
    public GameObject newWheel;
    public GameObject sparkleParticles;



    public Animator anim;


    public void OnTriggerEnter(Collider collision)
    {
        if (collision.gameObject.tag == moveToTarget)
        {
            sparkleParticles.SetActive(true);

            newWheel.SetActive(true);
            oldWheel.SetActive(false);

            anim.Play("turnInvisible_Wheels");

            Debug.Log("touching: " + moveToTarget);
        }
    }


    public void DestroyThisObject()
    {
        nextBodyPart.SetActive(true);
        gameObject.SetActive(false);
    }
}