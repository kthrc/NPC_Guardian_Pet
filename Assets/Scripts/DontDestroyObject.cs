using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class DontDestroyObject : MonoBehaviour
{
    public GameObject obj;
    public GameObject mainBg;
    public void Awake()
    {
        Scene scene = SceneManager.GetActiveScene();


        /* if (scene.name != "3_Main")
         {
             Debug.Log("Destroy");
             Destroy(mainBg);
         }*/

        DontDestroyOnLoad(obj);
    }
}