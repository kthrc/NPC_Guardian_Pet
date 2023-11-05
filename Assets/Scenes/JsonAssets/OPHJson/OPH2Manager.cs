using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;

public class OPH2JsonManager : MonoBehaviour
{
    [System.Serializable]
    public class sentences
    {
        public string content;
    }

    [System.Serializable]
    public class OPH2JsonData
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
    public class OPH2JsonDataArray
    {
        public OPH2JsonData[] OPH2;
    }

    void start()
    {
        TextAsset textAsset = Resources.Load<TextAsset>("OPH2.json");
        OPH2JsonDataArray OPH2List = JsonUtility.FromJson<OPH2JsonDataArray>(textAsset.text);

        foreach (OPH2JsonData it in OPH2List.OPH2)
        {
            it.printSentences();
        }

        string classtoJson = JsonUtility.ToJson(OPH2List);
        Debug.Log(classtoJson);
    }
}