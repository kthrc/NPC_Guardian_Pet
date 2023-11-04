using System.IO;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PrologueDataManager : MonoBehaviour
{
    [System.Serializable]
    public class PrologueDataArray
    {
        public PrologueData[] prologue;
    }

    [System.Serializable]
    public class PrologueData
    { 
        public string name;
        public int scene;
        public Comments[] comments;
    }

    [System.Serializable]
    public class Comments
    {
        public string content;
    }

    void start()
    {
        loadData();
    }

    public PrologueData loadData()
    {
        string filepath = "manager/Prologue.json";
        string json = File.ReadAllText(filepath);

        PrologueData prologueList = JsonUtility.FromJson<PrologueData>(json);

        for (int i = 0; i < comments.length; i++)
        {
            Debug.Log("json");
            Debug.Log(prologueList.comments[i]);
        }
    }

    public void jsonDebug()
    {
        Debug.Log("json");
    }

}

