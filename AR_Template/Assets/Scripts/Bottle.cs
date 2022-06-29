using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Bottle : MonoBehaviour
{

    public string moveToTarget = " ";

    public GameObject bottleOrigin;
    public GameObject sparkleParticles;


    public Animator anim;


    public void OnTriggerEnter(Collider collision)
    {
        if (collision.gameObject.tag == moveToTarget)
        {
            sparkleParticles.SetActive(true);

            anim.Play("turnInvisible");

            Debug.Log("touching: " + moveToTarget);
        }
    }

    public void resetBottle()
    {
        sparkleParticles.SetActive(false);

        gameObject.transform.position = bottleOrigin.transform.position;

        anim.Play("turnVisible");

    }
}
