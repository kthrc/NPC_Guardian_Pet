using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class Dental : MonoBehaviour
{
    // Card Choice
    public GameObject DentalCard1;
    public GameObject DentalCard2;
    public GameObject DentalCard3;

    // 선택된 카드(확대샷)
    public GameObject SelectedCard1;
    public GameObject SelectedCard2;
    public GameObject SelectedCard3;

    public GameObject Book;

    public SpriteRenderer Renderer;
    public Sprite Card1;
    public Sprite Card2;
    public Sprite Card3;

    // Card -> Book
    public GameObject[] BookStart; // 

    public Text ChapterName;
    // Book -> Mission
    public GameObject Mission1;
    public GameObject Mission2;
    public GameObject Mission3;
    public GameObject Mission4;
    public GameObject Mission5;
    public GameObject Mission6;
    public GameObject Mission7;
    public GameObject Mission8;
    public GameObject Mission9;

    // Mission -> BookEnding
    public GameObject BookEnding1;
    public GameObject BookEnding2;
    public GameObject BookEnding3;

    // BookEnding -> Success(Get Card!)
    public GameObject Success1;
    public GameObject Success2;
    public GameObject Success3;

    public int cnt = 0;
    public static int index = 0;


    public void OnClick()
    {
        GameObject clickObject = EventSystem.current.currentSelectedGameObject;

        // choice 1
        if (clickObject.name == "DentalCard1") //
        {
            DentalCard1.SetActive(false);
            DentalCard2.SetActive(false);
            DentalCard3.SetActive(false);

            //선택된 카드 확대샷
            SelectedCard1.SetActive(true);

            ChapterName.text = "이가 썩었어요";


        }

        // choice 2
        if (clickObject.name == "DentalCard2") //
        {
            DentalCard1.SetActive(false);
            DentalCard2.SetActive(false);
            DentalCard3.SetActive(false);

            //선택된 카드 확대샷
            SelectedCard2.SetActive(true);
            ChapterName.text = "이가 빠졌어요";
        }

        // choice 3
        if (clickObject.name == "DentalCard3") //cnt == 0 && 
        {
            DentalCard1.SetActive(false);
            DentalCard2.SetActive(false);
            DentalCard3.SetActive(false);

            //선택된 카드 확대샷
            SelectedCard3.SetActive(true);

            ChapterName.text = "이가 부러졌어요";
        }

        cnt++;
        Debug.Log("Click " + cnt);
        if(cnt == 1)
        {

            Invoke("OnDoubleClick", 2f);
        }
    }

    public void OnDoubleClick()
    {
        Debug.Log("Double Click " + cnt);

        GameObject clickObj = EventSystem.current.currentSelectedGameObject;
        SelectedCard1.SetActive(false);
        SelectedCard2.SetActive(false);
        SelectedCard3.SetActive(false);


        // Choice Card1 증상카드1
        if (clickObj = SelectedCard1) //
        {
            DentalCard1.SetActive(false);
            DentalCard2.SetActive(false);
            DentalCard3.SetActive(false);


            Book.SetActive(true); // 스토리로 이동

            if (BookStart[0].activeSelf) // 챕터 이름(위에!) OK
            {
                ChapterName.text = "이가 썩었어요";
            }
            //BookStart[0].SetActive(true);
            ChapterName.text = "이가 썩었어요";
            //SelectedCard.SetActive(false);
            //BookStart1.SetActive(true);

        }
        // Choice Card2 증상카드 2
        if (clickObj.name == "SelectedCard2") //
        {
            ChapterName.text = "이가 빠졌어요";

            DentalCard1.SetActive(false);
            DentalCard2.SetActive(false);
            DentalCard3.SetActive(false);

            

            //팝업 책 
            //Book.SetActive(true);
            //BookStart[0].SetActive(true);
            
            /*SelectedCard.SetActive(false);*/
            Book.SetActive(true); // 스토리로 이동

            if (BookStart[1].activeSelf) // 챕터 이름(위에!)
            {
                Debug.Log(".");

                ChapterName.text = "이가 빠졌어요";
            }
            
        }
        // Choice Card3 증상카드 3
        if (clickObj.name == "SelectedCard3")
        {
            DentalCard1.SetActive(false);
            DentalCard2.SetActive(false);
            DentalCard3.SetActive(false);

            

            //BookStart[0].SetActive(true);
            //SelectedCard.SetActive(false);

            //팝업 책 
            //Book.SetActive(true);
            //BookNextBtn.SetActive(true);

            //SelectedCard.SetActive(false);
            Book.SetActive(true); // 스토리로 이동

            if (BookStart[2].activeSelf) // 챕터 이름(위에!)
            {
                ChapterName.text = "이가 부러졌어요";
            }
            ChapterName.text = "이가 부러졌어요";
        }
        cnt++;
    }

    public void B1ToM1() // 책에서 미션으로 넘어가는 Invoke 함수에 필요한 함수
    {
        //이야기 1에서 미션1로 넘어감
        Book.SetActive(false);

        Mission1.SetActive(true);
        ChapterName.text = "이가 썩었어요";
        // 책 -> 미션 후에 병원 아이콘 옆에 생기는 선택된 카드 아이콘!
        /*SelectedCard = DentalCard1;

        // 선택된 카드 x, y 값 포지션 값 변경
        Vector3 position = SelectedCard.transform.localPosition;
        position.x = 100;
        position.y = 950;
        SelectedCard.transform.localPosition = position;

        //병원 아이콘 옆에 놓기
        transform.localScale = new Vector3(0.7f, 0.7f, 0.7f);*/

        //SelectedCard.SetActive(true);

    }
    public void B2ToM4() // 책에서 미션으로 넘어가는 Invoke 함수에 필요한 함수
    {
        //이야기 2에서 미션4로 넘어감
        Book.SetActive(false);

        Mission4.SetActive(true);
        ChapterName.text = "이가 빠졌어요";
        //////////////////////////////////////
        /*SelectedCard = DentalCard2;

        Vector3 position = SelectedCard.transform.localPosition;
        position.x = 100;
        position.y = 950;
        SelectedCard.transform.localPosition = position;

        //병원 아이콘 옆에 놓기
        transform.localScale = new Vector3(0.7f, 0.7f, 0.7f);
*/
        //SelectedCard.SetActive(true);
    }
    public void B3ToM7() // 책에서 미션으로 넘어가는 Invoke 함수에 필요한 함수
    {
        //이야기 3에서 미션6로 넘어감
        Book.SetActive(false);

        Mission7.SetActive(true);
        ChapterName.text = "이가 부러졌어요";
        //////////////////////////////////////
        /*SelectedCard = DentalCard3;

        Vector3 position = SelectedCard.transform.localPosition;
        position.x = 100;
        position.y = 950;
        SelectedCard.transform.localPosition = position;

        //병원 아이콘 옆에 놓기
        transform.localScale = new Vector3(0.7f, 0.7f, 0.7f);*/

        //SelectedCard.SetActive(true);
    }


    //BookStart 함수(카드 선택 후 이야기 진행!)
    public void OnNextClick()
    {
        GameObject obj = EventSystem.current.currentSelectedGameObject;
       
        //index++;

        // 이야기 1 next btn
        if (obj.name == "BookNextBtn1") //
        {
            Debug.Log("클릭 작동");
            Debug.Log(index);
            ChapterName.text = "이가 썩었어요";
            BookStart[index].SetActive(false);
            index++;
            if (index != 4) // 스토리 안 끝나면
            {
                BookStart[index].SetActive(true);
            }
            if(index == 4) //스토리 끝나면 
            {
                Invoke("B1ToM1", 0.02f);
                /*Book.SetActive(false);

                Mission1.SetActive(true);*/
                index = 0;
            }
        }


        if (obj.name == "BookNextBtn2") //
        {
            Debug.Log("클릭 작동");
            Debug.Log(index);
            ChapterName.text = "이가 빠졌어요";
            BookStart[index].SetActive(false);
            index++;
            if (index != 4) // 스토리 안 끝나면
            {
                BookStart[index].SetActive(true);
            }
            if (index == 4) //스토리 끝나면 
            {
                Invoke("B2ToM4", 0.02f);
                /*Book.SetActive(false);

                Mission4.SetActive(true);*/
                index = 0;
            }
        }

        if (obj.name == "BookNextBtn3") //
        {
            Debug.Log("클릭 작동");
            Debug.Log(index);
            
            BookStart[index].SetActive(false);
            index++;
            if (index != 4) // 스토리 안 끝나면
            {
                ChapterName.text = "이가 부러졌어요";
                BookStart[index].SetActive(true);
            }
            if (index == 4) //스토리 끝나면 
            {
                Invoke("B3ToM7", 0.02f);
                /*Book.SetActive(false);

                Mission7.SetActive(true);*/
                index = 0;
            }
        }
    }
    //Success
    /*public void OnClickToAnother()
    {
        GameObject clickObj = EventSystem.current.currentSelectedGameObject;

        if (clickObj == Success1)
        {
            Success1.SetActive(false);

            //SelectedCard1.SetActive(true);

            // 작게 
            *//*//SelectedCard1 = clickObj; //할당때문에,,
            Vector3 po = SelectedCard1.transform.localPosition;
            po.x = 0;
            po.y = 0;
            SelectedCard1.transform.localPosition = po;*//*

            //병원 아이콘 옆에 놓기
            //SelectedCard1.transform.localScale = new Vector3(0.7f, 0.7f, 0.7f);

            //SelectedCard1.SetActive(true);
            //
            *//*
            DentalCard2.SetActive(true);
            DentalCard3.SetActive(true);*//*
        }
    }*/

    public void OnClickContinue()
    {
        DentalCard2.SetActive(true);
        DentalCard3.SetActive(true);


    }
}
