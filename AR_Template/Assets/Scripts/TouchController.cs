using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TouchController : MonoBehaviour
{
    private bool isMoveing = false;
    private float hitDisstance = 0.0f;

    public string moveTarget = "submarine_merged_adapted";

    public GameObject Jezuus;

    // Start is called before the first frame update
    void Start()
    {
        
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
  
            if(isMoveing)
            {
                Vector3 targetPosition = ray.direction * hitDisstance + ray.origin;

                //transform.position = targetPosition;
                transform.position = Vector3.Lerp(transform.position, targetPosition, Time.deltaTime * 10);

                targetHits = Physics.RaycastAll(ray);

                foreach(var targetHit in targetHits)
                {
                    Debug.Log(targetHit.collider.name);
                    Debug.Log(targetHit.transform.name);

                    if(targetHit.transform.name == moveTarget)
                    {
                        gameObject.SetActive(false);
                        Jezuus.SetActive(true);
                    }
                }
            }
            else
            {
                Physics.Raycast(ray.origin, ray.direction, out hit);
                if (hit.transform != null)
                {
                    isMoveing = true;
                    hitDisstance = hit.distance;
                }
            }
        }
    }
}
