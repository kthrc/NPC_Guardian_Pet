using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Main_Manager : MonoBehaviour
{
    public int gameIndex = -1;
    public GameObject[] DontDestroy_Objects;
    private static Main_Manager instance;
    public int stageClear = 0;

    public static Main_Manager Instance
    {
        get
        {
            if (instance == null)
            {
                instance = FindObjectOfType<Main_Manager>();
                DontDestroyOnLoad(instance.gameObject);
            }
            return instance;
        }
    }

    public void ClearStage(int stage)
    {
        stageClear = stage;
        Debug.Log(stageClear);
    }

    // Start is called before the first frame update
    void Awake()
    {
        if (instance != null && instance != this)
        {
            Destroy(this.gameObject);
        }
        else
        {
            instance = this;
            DontDestroyObjects();
        }

    }
    private void DontDestroyObjects()
    {
        foreach (GameObject obj in DontDestroy_Objects)
        {
            DontDestroyOnLoad(obj);
            Debug.Log(obj.name + " added");
        }
    }

    public void DestroyObj()
    {
        foreach (GameObject obj in DontDestroy_Objects)
        {
            Destroy(obj);
        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
