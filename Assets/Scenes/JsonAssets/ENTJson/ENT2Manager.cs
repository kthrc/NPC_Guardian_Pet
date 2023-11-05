using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;

public class ENT2JsonManager : MonoBehaviour
{
    [System.Serializable]
    public class sentences
    {
        public string content;
    }

    [System.Serializable]
    public class ENT2JsonData
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
    public class ENT2JsonDataArray
    {
        public ENT2JsonData[] ENT2;
    }

    void start()
    {
        TextAsset textAsset = Resources.Load<TextAsset>("ENT2.json");
        ENT2JsonDataArray ENT2List = JsonUtility.FromJson<ENT2JsonDataArray>(textAsset.text);

        foreach (ENT2JsonData it in ENT2List.ENT2)
        {
            it.printSentences();
        }

        string classtoJson = JsonUtility.ToJson(ENT2List);
        Debug.Log(classtoJson);
    }
}