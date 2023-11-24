using System.Collections;
using System.Collections.Generic;
using UnityEngine;using UnityEngine.EventSystems;
using System.IO;

//ī�� �ϳ� ȹ���Ҷ����� �ش� String �迭 �ڸ��� 1 ����
//->saveData() �޼ҵ� ȣ��
//�ҷ����� �ÿ��� loadData()�� json ���� �а� �����Ȳ �ҷ�����!

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
    //�߰�
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
        //�߰�
        if (ENTCard1) //ī�带 ȹ���ϸ�
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
            Debug.LogWarning("���� ������ ã�� �� �����ϴ�.");
        }
    }
}