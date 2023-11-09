using UnityEngine;
using TMPro;
using System.IO;
using System; 
using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
public class MainManager : MonoBehaviour
{
    [System.Serializable]
    public class MainScripts
    {
        public string script;
        private int idx = 0;
        public TextMeshProUGUI descriptsText;
        public GameObject MainDialogue;
        private MainList mainList;

        [System.Serializable]
        public class Main
        {
            public string name;
            public int scene;
            public string script;
        }

        [System.Serializable]
        public class MainList
        {
            public string name;
            public int scene;
            public string script;
        }

        void Start()
        {
            string path = Application.dataPath + "Assets/Scenes/JsonAssets/MainJson.json";
            string json = File.ReadAllText(path);
            mainList = JsonUtility.FromJson<MainList>(json);

            DisplayDialogue();
        }

        void Update()
        {
            if (Input.anyKeyDown)
                NextDialogue();
        }

        void DisplayDialogue()
        {
            if (idx < 13)
            {
                descriptsText.text = mainList.main[idx].script;
            }
        }

        void NextDialogue()
        {
            idx++;

            if (idx >= 13)
                MainDialogue.SetActive(false);
        }
    }

}