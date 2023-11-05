using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;

public class OPH1JsonManager : MonoBehaviour
{
    [System.Serializable]
    public class sentences
    {
        public string content;
    }

    [System.Serializable]
    public class OPH1JsonData
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
    public class OPH1JsonDataArray
    {
        public OPH1JsonData[] OPH1;
    }

    void start()
    {
        TextAsset textAsset = Resources.Load<TextAsset>("OPH1.json");
        OPH1JsonDataArray OPH1List = JsonUtility.FromJson<OPH1JsonDataArray>(textAsset.text);

        foreach (OPH1JsonData it in OPH1List.OPH1)
        {
            it.printSentences();
        }

        string classtoJson = JsonUtility.ToJson(OPH1List);
        Debug.Log(classtoJson);
    }
}