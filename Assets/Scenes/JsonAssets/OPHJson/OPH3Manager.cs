using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;

public class OPH3JsonManager : MonoBehaviour
{
    [System.Serializable]
    public class sentences
    {
        public string content;
    }

    [System.Serializable]
    public class OPH3JsonData
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
    public class OPH3JsonDataArray
    {
        public OPH3JsonData[] OPH3;
    }

    void start()
    {
        TextAsset textAsset = Resources.Load<TextAsset>("OPH3.json");
        OPH3JsonDataArray OPH3List = JsonUtility.FromJson<OPH3JsonDataArray>(textAsset.text);

        foreach (OPH3JsonData it in OPH3List.OPH3)
        {
            it.printSentences();
        }

        string classtoJson = JsonUtility.ToJson(OPH3List);
        Debug.Log(classtoJson);
    }
}