using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;

public class ENT1JsonManager : MonoBehaviour
{
    [System.Serializable]
    public class sentences
    {
        public string content;
    }

    [System.Serializable]
    public class ENT1JsonData
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
    public class ENT1JsonDataArray
    {
        public ENT1JsonData[] ENT1;
    }

    void start()
    {
        TextAsset textAsset = Resources.Load<TextAsset>("ENT1.json");
        ENT1JsonDataArray ENT1List = JsonUtility.FromJson<ENT1JsonDataArray>(textAsset.text);

        foreach (ENT1JsonData it in ENT1List.ENT1)
        {
            it.printSentences();
        }

        string classtoJson = JsonUtility.ToJson(ENT1List);
        Debug.Log(classtoJson);
    }
}