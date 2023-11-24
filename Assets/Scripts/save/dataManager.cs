using System.Collections;
using System.Collections.Generic;
using UnityEngine;using UnityEngine.EventSystems;
using System.IO;

//카드 하나 획득할때마다 해당 String 배열 자리에 1 쓰기
//->saveData() 메소드 호출
//불러오기 시에도 loadData()로 json 파일 읽고 진행상황 불러오기!

[System.Serializable]
public class PlayerData
{
    public string[] card = { "", "", "", "", "", "", "", "", "" };
}

public class DataManager : MonoBehaviour
{
    public static DataManager instance;
    PlayerData nowPlayer = new PlayerData();
    string path;
    string filename = "saveData";
    //추가
    public GameObject ENTCard1;
    public GameObject ENTCard2;
    public GameObject ENTCard3;
    public GameObject EyeCard1;
    public GameObject EyeCard2;
    public GameObject EyeCard3;
    public GameObject DentalCard1;
    public GameObject DentalCard2;
    public GameObject DentalCard3;

    private void Awake()
    {
        if (instance == null)
        {
            instance = this;
        }
        else if (instance != this)
        {
            Destroy(instance.gameObject);
        }
        DontDestroyOnLoad(this.gameObject);

        path = Application.persistentDataPath + "/";
    }

    // Start is called before the first frame update
    void Start()
    {
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void getCard()
    {
        //추가
        if (ENTCard1) //카드를 획득하면
        {
            LoadData();
            nowPlayer.card[0] = "1";
            SaveData();
        }
        if (ENTCard2) 
        {
            LoadData();
            nowPlayer.card[1] = "1";
            SaveData();
        }
        if (ENTCard3)
        {
            LoadData();
            nowPlayer.card[2] = "1";
            SaveData();
        }

        if (EyeCard1) 
        {
            LoadData();
            nowPlayer.card[3] = "1";
            SaveData();
        }
        if (EyeCard2)
        {
            LoadData();
            nowPlayer.card[4] = "1";
            SaveData();
        }
        if (EyeCard3)
        {
            LoadData();
            nowPlayer.card[5] = "1";
            SaveData();
        }

        if (DentalCard1)
        {
            LoadData();
            nowPlayer.card[6] = "1";
            SaveData();
        }
        if (DentalCard2)
        {
            LoadData();
            nowPlayer.card[7] = "1";
            SaveData();
        }
        if (DentalCard3)
        {
            LoadData();
            nowPlayer.card[8] = "1";
            SaveData();
        }
    }

    public void SaveData()
    {
        string data = JsonUtility.ToJson(nowPlayer);
        File.WriteAllText(path + filename, data);
    }

    public void LoadData()
    {
        if (File.Exists(path + filename))
        {
            string data = File.ReadAllText(path + filename);
            nowPlayer = JsonUtility.FromJson<PlayerData>(data);
        }
        else
        {
            Debug.LogWarning("저장 파일을 찾을 수 없습니다.");
        }
    }
}