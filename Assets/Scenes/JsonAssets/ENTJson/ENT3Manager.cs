using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;

public class ENT3JsonManager : MonoBehaviour
{
    [System.Serializable]
    public class sentences
    {
        public string content;
    }

    [System.Serializable]
    public class ENT3JsonData
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
    public class ENT3JsonDataArray
    {
        public ENT3JsonData[] ENT3;
    }

    void start()
    {
        TextAsset textAsset = Resources.Load<TextAsset>("ENT3.json");
        ENT3JsonDataArray ENT3List = JsonUtility.FromJson<ENT3JsonDataArray>(textAsset.text);

        foreach (ENT3JsonData it in ENT3List.ENT3)
        {
            it.printSentences();
        }

        string classtoJson = JsonUtility.ToJson(ENT3List);
        Debug.Log(classtoJson);
    }
}