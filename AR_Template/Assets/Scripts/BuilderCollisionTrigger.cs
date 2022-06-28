using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BuilderCollisionTrigger : MonoBehaviour
{
    private bool isMoving = false;
    private float hitDisstance = 0.0f;

    public string moveToTarget = " ";

    public GameObject nextBodyPart;
    public GameObject sparkleParticles;

    public GameObject changeMaterial;
    public Material New_Material;

    public Animator anim;


    public void OnTriggerEnter(Collider collision)
    {
        if (collision.gameObject.tag == moveToTarget)
        {
            sparkleParticles.SetActive(true);        
            changeMaterial.GetComponent<MeshRenderer>().material = New_Material;

            anim.Play("turnInvisible");

            Debug.Log("touching: " + moveToTarget);
        }
    }


    public void DestroyThisObject()
    {
        nextBodyPart.SetActive(true);
        gameObject.SetActive(false);
    }
}