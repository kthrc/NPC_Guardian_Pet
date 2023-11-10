using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class EyeMission : MonoBehaviour
{
    public GameObject M1; // M1 오브젝트
    public GameObject M2;
    public GameObject M3;

    public GameObject M1_Dental; // 미션 1 (병원 맞추기)
    public GameObject M1_ENT;
    public GameObject M1_Eye;

    public GameObject M1_OBtn; // 맞았는지 아닌지 OX 출력(M1)
    public GameObject M1_XBtn1;
    public GameObject M1_XBtn2;

    public Text GuardianPetText; // 틀렸을 때 펫 말 변경

    // public int M1_end = 0; // flag 값

    public GameObject M2_O; // M2(OX퀴즈) OX 버튼
    public GameObject M2_X;

    //public int _rotSpeed = 60; // 진동 효과 위해서 넣어놓음

    public GameObject M3_DCard1; // M3(증상카드) 증상카드
    public GameObject M3_DCard2;
    public GameObject M3_DCard3;

    public GameObject M3_OBtn; // 맞았는지 아닌지 OX 출력(M3)
    public GameObject M3_XBtn1;
    public GameObject M3_XBtn2;

    public GameObject Success1; // 펫 획득 오브젝트
    public GameObject Success2;
    public GameObject Success3;

    Vector2 startingPos; // 진동 효과 위해서 넣어놓음222 (구현 안 됨 ㅠ)

    public static int[] EyeState = new int[3];
    /*public static int[] ENTState;
    public static int[] EyeState;*/

    void Update()
    {
        startingPos.x = transform.position.x;
        startingPos.y = transform.position.y;

        //Success1.GetComponent<Eye>().OnClickContinue3();
    }

    public void OnM1Click()
    {

        GameObject clickObject = EventSystem.current.currentSelectedGameObject;


        if (clickObject == M1_Dental) // X 출력하고 펫이 설명해줘야됨
        {
            M1_XBtn1.SetActive(true); //X출력
            GuardianPetText.text = "다시 한 번 생각해봐";
        }

        if (clickObject == M1_ENT) // X 출력하고 펫이 설명해줘야됨
        {
            M1_XBtn2.SetActive(true); //X출력
            GuardianPetText.text = "다시 한 번 생각해봐";
        }

        if (clickObject == M1_Eye) // O 출력
        {
            M1_OBtn.SetActive(true); //

            /*M1_end = 1; // flag 값
            M1.SetActive(false);

            M2.SetActive(true);*/

            Invoke("M1ToM2", 0.2f); // 시간 차를 주고 NextMission 으로 넘김
        }

    }
    public void M1ToM2() //M1->M2 Mission1에서 Mission2가 아닐 경우 수정하면 됨
    {
        M1.SetActive(false);

        M2.SetActive(true);
    }
    public void M2ToM3() //M2->M3  
    {
        M2.SetActive(false);

        M3.SetActive(true);
    }
    //M2
    public void OnM2Click()
    {
        GameObject clickObj = EventSystem.current.currentSelectedGameObject;

        // O 버튼 선택 시 ->  정답
        if (clickObj == M2_O)
        {
            //M2_X.SetActive(false);

            GuardianPetText.text = "";

            /*Vector3 position = M2_O.transform.localPosition;
            position.x = 1780;
            position.y = 1870;
            M2_O.transform.localPosition = position;
*/

            Invoke("M2ToM3", 0.2f); // 시간 차를 주고 NextMission 으로 넘김
            // 삽입된 미션 -> 다시 책으로 돌아감


            // 책을 다 읽은 뒤 -> 펫 획득 UI로 넘어감


        }

        // X 버튼 선택 시 -> 진동 효과 어떻게..?
        if (clickObj == M2_X)
        {
            GuardianPetText.text = "다시 한 번 생각해봐";
            /*
                        M2_X.transform.position.x = startingPos.x + (Mathf.Sin(Time.time * 1) * 1);

                        M2_X.transform.position.y = startingPos.y + (Mathf.Sin(Time.time * 1) * 1);
            */


            /* Vector3 position = M2_X.transform.localPosition;
             position.x = 2500;
             position.y = 1870;
             M2_X.transform.localPosition = position;
             transform.localScale = new Vector3(3f, 3f, 3f);
 */
        }
    }

    //M3
    public void OnM3Click()
    {
        GameObject clickObj = EventSystem.current.currentSelectedGameObject;

        if (clickObj == M3_DCard1)// -> 정답
        {
            M3_OBtn.SetActive(true); // O출력

            GuardianPetText.text = "";

            // 다음으로 넘어감 (펫 획득 UI!)
            M3.SetActive(false);
            EyeState[1] = 1;
            Success1.SetActive(true); // 해결

            //OnClickToAnother();
        }

        if (clickObj == M3_DCard2)
        {

            M3_XBtn1.SetActive(true);// X 출력

            GuardianPetText.text = "다시 한 번 생각해봐";



        }

        if (clickObj == M3_DCard3)
        {

            M3_XBtn2.SetActive(true); //X출력

            GuardianPetText.text = "다시 한 번 생각해봐";
        }
    }


    public void OnM6Click()
    {
        GameObject clickObj = EventSystem.current.currentSelectedGameObject;

        if (clickObj == M3_DCard2)// -> 정답
        {
            M3_OBtn.SetActive(true); // O출력

            GuardianPetText.text = "";

            // 다음으로 넘어감 (펫 획득 UI!)
            M3.SetActive(false);
            EyeState[2] = 1;
            Success2.SetActive(true); // -> 
        }

        if (clickObj == M3_DCard1)
        {

            M3_XBtn1.SetActive(true);// X 출력

            GuardianPetText.text = "다시 한 번 생각해봐";



        }

        if (clickObj == M3_DCard3)
        {

            M3_XBtn2.SetActive(true); //X출력

            GuardianPetText.text = "다시 한 번 생각해봐";
        }
    }

    //M9
    public void OnM9Click()
    {
        GameObject clickObj = EventSystem.current.currentSelectedGameObject;

        if (clickObj == M3_DCard3)// -> 정답
        {
            M3_OBtn.SetActive(true); // O출력

            GuardianPetText.text = "";

            // 다음으로 넘어감 (펫 획득 UI!)
            M3.SetActive(false);
            EyeState[2] = 1;
            Success3.SetActive(true); // -> 
        }

        if (clickObj == M3_DCard1)
        {

            M3_XBtn1.SetActive(true);// X 출력

            GuardianPetText.text = "다시 한 번 생각해봐";
        }

        if (clickObj == M3_DCard2)
        {

            M3_XBtn2.SetActive(true); //X출력

            GuardianPetText.text = "다시 한 번 생각해봐";
        }
    }

    public void ContinueGame1()
    {
        //Success1.SetActive(false);
        GameObject clickObj = EventSystem.current.currentSelectedGameObject;

        Vector3 p = Success1.transform.localPosition;
        p.x = -100;
        p.y = 0;
        Success1.transform.localPosition = p;
        transform.localScale = new Vector3(3, 3f, 3f);


        Success1.SetActive(true);
        clickObj.GetComponent<Eye>().OnClickContinue1();

    }
    public void ContinueGame2()
    {
        //Success1.SetActive(false);
        GameObject clickObj = EventSystem.current.currentSelectedGameObject;

        Vector3 p = Success2.transform.localPosition;
        p.x = 0;
        p.y = 0;
        Success2.transform.localPosition = p;
        transform.localScale = new Vector3(1, 1f, 1f);


        Success2.SetActive(true);
        clickObj.GetComponent<Eye>().OnClickContinue2();

    }
    public void ContinueGame3()
    {
        //Success1.SetActive(false);
        GameObject clickObj = EventSystem.current.currentSelectedGameObject;

        Vector3 p = Success3.transform.localPosition;
        p.x = 0;
        p.y = 0;
        Success1.transform.localPosition = p;
        transform.localScale = new Vector3(1, 1f, 1f);


        Success3.SetActive(true);
        clickObj.GetComponent<Eye>().OnClickContinue3();

    }
    public void GoToMain()
    {
        if (EyeState[0] == 1 &&
            EyeState[1] == 1 &&
            EyeState[2] == 1)
        {
            SceneManager.LoadScene("3_Main");
        }
    }
}