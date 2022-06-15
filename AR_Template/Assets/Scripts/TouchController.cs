using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TouchController : MonoBehaviour
{
    private bool isMoving = false;
    private float hitDisstance = 0.0f;

    public string moveToTarget = " ";

    public GameObject nextBodyPart;
    public GameObject sparkleParticles;

    public GameObject changeMaterial;
    public Material New_Material;

    private Animation anim;

    // Start is called before the first frame update
    void Start()
    {
        anim = gameObject.GetComponent<Animation>();
    }

    // Update is called once per frame
    void Update()
    {
        if(Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Stationary)
            {
            Vector2 touchPosition = Input.GetTouch(0).position;

            Ray ray = Camera.main.ScreenPointToRay(new Vector3(touchPosition.x, touchPosition.y, 0f));

            RaycastHit hit;
            RaycastHit[] targetHits;
  
            if(isMoving)
            {
                Vector3 targetPosition = ray.direction * hitDisstance + ray.origin;

                //transform.position = targetPosition;
                transform.position = Vector3.Lerp(transform.position, targetPosition, Time.deltaTime * 10);

                targetHits = Physics.RaycastAll(ray);

                foreach(var targetHit in targetHits)
                {
                    Debug.Log(targetHit.collider.name);
                    Debug.Log(targetHit.transform.name);

                    if(targetHit.transform.name == moveToTarget)
                    {
                        //gameObject.SetActive(false);

                        sparkleParticles.SetActive(true);
                        nextBodyPart.SetActive(true);
                        changeMaterial.GetComponent<MeshRenderer>().material = New_Material;

                        anim.Play("turnInvisible");
                    }
                }
            }
            else
            {
                Physics.Raycast(ray.origin, ray.direction, out hit);
                if (hit.transform != null)
                {
                    isMoving = true;
                    hitDisstance = hit.distance;
                }
            }
        }
    }

    public void DestroyThisObject()
    {
        gameObject.SetActive(false);
    }
}
