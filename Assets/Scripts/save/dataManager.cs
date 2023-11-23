using System.Collections;
using System.Collections.Generic;
using UnityEngine;
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