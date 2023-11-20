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

    public GameObject SelectedCard;
    public GameObject Book;

    // Card -> Book
    public GameObject[] BookStart; // 
   /* public GameObject[] BookStart2;
    public GameObject[] BookStart3;*/

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

    public bool b1 = true;
    public bool b2 = true;
    public bool b3 = true;

    public void ReadyCard(bool b1, bool b2, bool b3)
    {
        DentalCard1.SetActive(b1);
        DentalCard2.SetActive(b2);
        DentalCard3.SetActive(b3);

    }
    public void OnClick()
    {
        GameObject clickObject = EventSystem.current.currentSelectedGameObject;

        // choice 1
        if (cnt == 0 && clickObject.name == "DentalCard1") //
        {
            DentalCard1.SetActive(false);
            DentalCard2.SetActive(false);
            DentalCard3.SetActive(false);

            SelectedCard = DentalCard1;
            
            //크기 및 위치
            Vector3 position = SelectedCard.transform.localPosition;
            position.x = 0;
            position.y = 0;
            SelectedCard.transform.localPosition = position;
            transform.localScale = new Vector3(1.5f, 1.5f, 1.5f);

            SelectedCard.SetActive(true);
            //cnt = 1;
            
            
        }

        // choice 2
        if (cnt == 0 && clickObject.name == "DentalCard2") //
        {
            DentalCard1.SetActive(false);
            DentalCard2.SetActive(false);
            DentalCard3.SetActive(false);

            SelectedCard = DentalCard2;
            //SelectedCard.position = new Vector2(0, 0);
            Vector3 position = SelectedCard.transform.localPosition;
            position.x = 0;
            position.y = 0;
            SelectedCard.transform.localPosition = position;
            transform.localScale = new Vector3(1.5f, 1.5f, 1.5f);

            SelectedCard.SetActive(true);
        }

        // choice 3
        if (cnt == 0 && clickObject.name == "DentalCard3") //
        {
            DentalCard1.SetActive(false);
            DentalCard2.SetActive(false);
            DentalCard3.SetActive(false);

            SelectedCard = DentalCard3;
            //SelectedCard.position = new Vector2(0, 0);
            Vector3 position = SelectedCard.transform.localPosition;
            position.x = 0;
            position.y = 0;
            SelectedCard.transform.localPosition = position;
            transform.localScale = new Vector3(1.5f, 1.5f, 1.5f);

            SelectedCard.SetActive(true);
        }

        cnt++;
        Debug.Log("Click " + cnt);
        if(cnt == 2)
        {
            
            OnDoubleClick();
        }
    }

    public void OnDoubleClick()
    {
        Debug.Log("Double Click " + cnt);

        GameObject clickObj = EventSystem.current.currentSelectedGameObject;

        // Choice Card1 증상카드1
        if (clickObj.name == "DentalCard1" && SelectedCard == DentalCard1 && cnt == 2) //
        {
            DentalCard1.SetActive(false);
            DentalCard2.SetActive(false);
            DentalCard3.SetActive(false);

            SelectedCard = DentalCard1;
            //SelectedCard.position = new Vector2(0, 0);

            // 선택된 카드 x, y 값 포지션 값 변경
            Vector3 position = SelectedCard.transform.localPosition;
            position.x = 100;
            position.y = 950;
            SelectedCard.transform.localPosition = position;

            //병원 아이콘 옆에 놓기
            transform.localScale = new Vector3(0.7f, 0.7f, 0.7f);

            //SelectedCard.SetActive(true);

            //팝업 책 (회색 배경)
            SelectedCard.SetActive(false);
            Book.SetActive(true); // 스토리로 이동
            /*BookStart[0].SetActive(true);
            SelectedCard.SetActive(false);*/
            //BookStart1.SetActive(true);

        }
        // Choice Card2 증상카드 2
        if (clickObj.name == "DentalCard2" && SelectedCard == DentalCard2 && cnt == 2) //
        {
            DentalCard1.SetActive(false);
            DentalCard2.SetActive(false);
            DentalCard3.SetActive(false);

            SelectedCard = DentalCard2;
            //SelectedCard.position = new Vector2(0, 0);
            Vector3 position = SelectedCard.transform.localPosition;
            position.x = 100;
            position.y = 950;
            SelectedCard.transform.localPosition = position;

            transform.localScale = new Vector3(0.7f, 0.7f, 0.7f);

            //SelectedCard.SetActive(true);

            //팝업 책 
            //Book.SetActive(true);
          /*  BookStart[0].SetActive(true);
            SelectedCard.SetActive(false);
*/
            SelectedCard.SetActive(false);
            Book.SetActive(true); // 스토리로 이동
        }
        // Choice Card3 증상카드 3
        if (clickObj.name == "DentalCard3" && SelectedCard == DentalCard3 && cnt == 2) //
        {
            DentalCard1.SetActive(false);
            DentalCard2.SetActive(false);
            DentalCard3.SetActive(false);

            SelectedCard = DentalCard3;
            //SelectedCard.position = new Vector2(0, 0);
            Vector3 position = SelectedCard.transform.localPosition;
            position.x = 100;
            position.y = 950;
            SelectedCard.transform.localPosition = position;

            transform.localScale = new Vector3(0.7f, 0.7f, 0.7f);

            //SelectedCard.SetActive(true);
/*
            BookStart[0].SetActive(true);
            SelectedCard.SetActive(false);*/

            //팝업 책 
            //Book.SetActive(true);
            //BookNextBtn.SetActive(true);

            SelectedCard.SetActive(false);
            Book.SetActive(true); // 스토리로 이동
        }
        cnt++;
    }

    public void B1ToM1() // 책에서 미션으로 넘어가는 Invoke 함수에 필요한 함수
    {
       //이야기 1에서 미션1로 넘어감
        Book.SetActive(false);
       
        Mission1.SetActive(true);

        // 책 -> 미션 후에 병원 아이콘 옆에 생기는 선택된 카드 아이콘!
        SelectedCard = DentalCard1;

        // 선택된 카드 x, y 값 포지션 값 변경
        Vector3 position = SelectedCard.transform.localPosition;
        position.x = 100;
        position.y = 950;
        SelectedCard.transform.localPosition = position;

        //병원 아이콘 옆에 놓기
        transform.localScale = new Vector3(0.7f, 0.7f, 0.7f);

        //SelectedCard.SetActive(true);

    }
    public void B2ToM4() // 책에서 미션으로 넘어가는 Invoke 함수에 필요한 함수
    {
        //이야기 2에서 미션4로 넘어감
        Book.SetActive(false);

        Mission4.SetActive(true);
        //////////////////////////////////////
        SelectedCard = DentalCard2;

        Vector3 position = SelectedCard.transform.localPosition;
        position.x = 100;
        position.y = 950;
        SelectedCard.transform.localPosition = position;

        //병원 아이콘 옆에 놓기
        transform.localScale = new Vector3(0.7f, 0.7f, 0.7f);

        //SelectedCard.SetActive(true);
    }
    public void B3ToM7() // 책에서 미션으로 넘어가는 Invoke 함수에 필요한 함수
    {
        //이야기 3에서 미션6로 넘어감
        Book.SetActive(false);

        Mission7.SetActive(true);
        //////////////////////////////////////
        SelectedCard = DentalCard3;

        Vector3 position = SelectedCard.transform.localPosition;
        position.x = 100;
        position.y = 950;
        SelectedCard.transform.localPosition = position;

        //병원 아이콘 옆에 놓기
        transform.localScale = new Vector3(0.7f, 0.7f, 0.7f);

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
            
            BookStart[index].SetActive(false);
            index++;
            if (index != 3) // 스토리 안 끝나면
            {
                BookStart[index].SetActive(true);
            }
            if(index == 3) //스토리 끝나면 
            {
                Invoke("B1ToM1", 0.02f);
                index = 0;
            }
        }


        if (obj.name == "BookNextBtn2") //
        {
            Debug.Log("클릭 작동");
            Debug.Log(index);

            BookStart[index].SetActive(false);
            index++;
            if (index != 3) // 스토리 안 끝나면
            {
                BookStart[index].SetActive(true);
            }
            if (index == 3) //스토리 끝나면 
            {
                Invoke("B2ToM4", 0.02f);
                index = 0;
            }
        }

        if (obj.name == "BookNextBtn3") //
        {
            Debug.Log("클릭 작동");
            Debug.Log(index);

            BookStart[index].SetActive(false);
            index++;
            if (index != 3) // 스토리 안 끝나면
            {
                BookStart[index].SetActive(true);
            }
            if (index == 3) //스토리 끝나면 
            {
                Invoke("B3ToM7", 0.02f);
                index = 0;
            }
        }
    }
}
