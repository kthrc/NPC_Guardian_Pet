using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;

public class dental1JsonManager : MonoBehaviour
{
    [System.Serializable]
    public class sentences
    {
        public string content;
    }

    [System.Serializable]
    public class dental1JsonData
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
    public class dental1JsonDataArray
    {
        public dental1JsonData[] dental1;
    }

    void start()
    {
        TextAsset textAsset = Resources.Load<TextAsset>("dental1.json");
        dental1JsonDataArray dental1List = JsonUtility.FromJson<dental1JsonDataArray>(textAsset.text);

        foreach (dental1JsonData it in dental1List.dental1)
        {
            it.printSentences();
        }

        string classtoJson = JsonUtility.ToJson(dental1List);
        Debug.Log(classtoJson);
    }
}