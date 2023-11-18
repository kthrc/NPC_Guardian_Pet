using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class NextBtn : MonoBehaviour
{
    //스크립트
    public GameObject Dental;

    // 카드 획득 오브젝트
    public GameObject Success1;
    public GameObject Success2;
    public GameObject Success3;

    public static bool b1 = true;
    public static bool b2 = true;
    public static bool b3 = true;

    public void OnClick()
    {
        GameObject clickObject = EventSystem.current.currentSelectedGameObject;

        if (clickObject.name == "S1NextBtn")
        {
            Success1.SetActive(false);
            b1 = false;
            Dental.GetComponent<Dental>().ReadyCard(b1, b2, b3);
        }

        if (clickObject.name == "S2NextBtn")
        {
            Success2.SetActive(false);
            b2 = false;
            Dental.GetComponent<Dental>().ReadyCard(b1, b2, b3);
        }

        if (clickObject.name == "S3NextBtn")
        {
            Success3.SetActive(false);
            b3 = false;
            Dental.GetComponent<Dental>().ReadyCard(b1, b2, b3);
        }

    }
}
