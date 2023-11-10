using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;

public class mainJsonManager : MonoBehaviour
{
    [System.Serializable]
    public class sentences
    {
        public string content;
    }

    [System.Serializable]
    public class mainJsonData
    {
        public string name;
        public int scene;
        public sentences[] scripts;

        public void printSentences()
        {
            for (int i = 0; i < scripts.Length; i++)
            {
                Debug.Log(name);
                Debug.Log(scene);
                Debug.Log(scripts[i].content);
            }
        }
    }

    [System.Serializable]
    public class mainJsonDataArray
    {
        public mainJsonData[] main;
    }

    void start()
    {
        TextAsset textAsset = Resources.Load<TextAsset>("main.json");
        mainJsonDataArray mainList = JsonUtility.FromJson<mainJsonDataArray>(textAsset.text);

        foreach (mainJsonData it in mainList.main)
        {
            it.printSentences();
        }

        string classtoJson = JsonUtility.ToJson(mainList);
        Debug.Log(classtoJson);
    }

/*    public mainJsonDataArray loadData()
    {
        string filePath = "JsonAssets/MainJson/main.json";
        string json = File.ReadAllText(filePath);

        mainJsonDataArray mainJsonList = JsonUtility.FromJson<mainJsonDataArray>(json);

            Debug.Log("json");
            Debug.Log(mainJsonList.main[i].name);
            Debug.Log(mainJsonList.main[i].scripts);
    }

    public void jsonDebug()
    {
        Debug.Log("json");
    }

    void update()
    {

    }*/
}