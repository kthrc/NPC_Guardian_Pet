using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class MainToHospital : MonoBehaviour
{
    // Start is called before the first frame update

    // 메인 맵에서 병원 아이콘 클릭 시 스토리&미니 게임으로 이동
    public void OnHosClick()
    {
        GameObject clickObject = EventSystem.current.currentSelectedGameObject;

        if (clickObject.name == "Main_ENTBtn")
        {
            SceneManager.LoadScene("ENT");
        }

        if (clickObject.name == "Main_EyeBtn")
        {
            SceneManager.LoadScene("Eye");
        }

        if (clickObject.name == "Main_DentalBtn")
        {
            SceneManager.LoadScene("Dental");
        }
    }
}
