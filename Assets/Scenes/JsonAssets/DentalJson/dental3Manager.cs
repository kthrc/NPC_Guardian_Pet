using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;

public class dental3JsonManager : MonoBehaviour
{
    [System.Serializable]
    public class sentences
    {
        public string content;
    }

    [System.Serializable]
    public class dental3JsonData
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
    public class dental3JsonDataArray
    {
        public dental3JsonData[] dental3;
    }

    void start()
    {
        TextAsset textAsset = Resources.Load<TextAsset>("dental3.json");
        dental3JsonDataArray dental3List = JsonUtility.FromJson<dental3JsonDataArray>(textAsset.text);

        foreach (dental3JsonData it in dental3List.dental3)
        {
            it.printSentences();
        }

        string classtoJson = JsonUtility.ToJson(dental3List);
        Debug.Log(classtoJson);
    }
}