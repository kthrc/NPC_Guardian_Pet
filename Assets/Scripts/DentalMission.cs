using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class DentalMission : MonoBehaviour
{
    public GameObject M1; // M1 오브젝트

    public GameObject M1_Eye; // 미션 1 (병원 맞추기)
    public GameObject M1_ENT;
    public GameObject M1_Dental;

    public GameObject M1_OBtn; // 맞았는지 아닌지 OX 출력
    public GameObject M1_XBtn1;
    public GameObject M1_XBtn2;

    public Text GuardianPetText; // 틀렸을 때 펫 말 변경

    public int M1_end = 0; // flag 값
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void OnM1Click()
    {
        GameObject clickObject = EventSystem.current.currentSelectedGameObject;

        if(M1_end == 1) // flag end 값 1이면 종료
        {
            M1.SetActive(false);

        }
        if(clickObject == M1_Eye) // X 출력하고 펫이 설명해줘야됨
        {
            M1_XBtn1.SetActive(true); //X출력
            GuardianPetText.text = "다시 한 번 생각해봐";
        }

        if (clickObject == M1_ENT) // X 출력하고 펫이 설명해줘야됨
        {
            M1_XBtn2.SetActive(true); //X출력
            GuardianPetText.text = "다시 한 번 생각해봐";
        }

        if (clickObject == M1_Dental) // O 출력
        {
            M1_OBtn.SetActive(true); //
            GuardianPetText.text = "잘했어!(임시)"; // 뭔가 허전해서 그냥 추가..

            M1_end = 1; // flag 값
        }
    }
}
