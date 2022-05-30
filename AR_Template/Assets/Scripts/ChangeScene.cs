using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class ChangeScene : MonoBehaviour
{
    // Start is called before the first frame update
    public string nextScene;

    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void switchScene()
    {
        Debug.Log("Loading: " + nextScene);
        SceneManager.LoadScene(nextScene);
    }

}
