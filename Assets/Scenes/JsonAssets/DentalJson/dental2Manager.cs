using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;

public class dental2JsonManager : MonoBehaviour
{
    [System.Serializable]
    public class sentences
    {
        public string content;
    }

    [System.Serializable]
    public class dental2JsonData
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
    public class dental2JsonDataArray
    {
        public dental2JsonData[] dental2;
    }

    void start()
    {
        TextAsset textAsset = Resources.Load<TextAsset>("dental2.json");
        dental2JsonDataArray dental2List = JsonUtility.FromJson<dental2JsonDataArray>(textAsset.text);

        foreach (dental2JsonData it in dental2List.dental2)
        {
            it.printSentences();
        }

        string classtoJson = JsonUtility.ToJson(dental2List);
        Debug.Log(classtoJson);
    }
}