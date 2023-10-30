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
    public GameObject[] BookStart1;
    public GameObject BookStart2;
    public GameObject BookStart3;

    // Book -> Mission
    public GameObject Mission1;
    public GameObject Mission2;
    public GameObject Mission3;

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

   /* float screenHeightHalf = Camera.main.orthographicSize;
    float screenWidthHalf = screenHeightHalf * Camera.main.aspect;*/
    
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
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
            
            /*tmp = SelectedCard;
            SelectedCard = DentalCard1;
            DentalCard1 = tmp;*/

            //SelectedCard.position = new Vector2(0, 0);
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

        // Choice Card1
        if (clickObj.name == "DentalCard1" && SelectedCard == DentalCard1 && cnt == 2) //
        {
            DentalCard1.SetActive(false);
            DentalCard2.SetActive(false);
            DentalCard3.SetActive(false);

            SelectedCard = DentalCard1;
            //SelectedCard.position = new Vector2(0, 0);
            Vector3 position = SelectedCard.transform.localPosition;
            position.x = 100;
            position.y = 950;
            SelectedCard.transform.localPosition = position;

            //병원 아이콘 옆에 놓기
            transform.localScale = new Vector3(0.7f, 0.7f, 0.7f);

            SelectedCard.SetActive(true);

            //팝업 책 (회색 배경)
            Book.SetActive(true);
            BookStart1[0].SetActive(true);
            //BookStart1.SetActive(true);

            /*foreach (GameObject obj in BookStart1)
            {
                obj.SetActive(true);
            }*/
        }
        // Choice Card2
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

            SelectedCard.SetActive(true);

            //팝업 책 
            Book.SetActive(true);

        }
        // Choice Card3
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

            SelectedCard.SetActive(true);

            //팝업 책 
            Book.SetActive(true);
            //BookNextBtn.SetActive(true);
        }
        cnt++;
    }

    //BookStart 함수(카드 선택 후 이야기 진행!)
    public void OnNextClick()
    {
        GameObject obj = EventSystem.current.currentSelectedGameObject;
        //cnt = 0;
        //index = 0;
        //index++;
        // 일단 출력
        //BookStart1[index].SetActive(true);

        //index++;
        if (obj.name == "BookNextBtn") //
        {
            Debug.Log("클릭 작동");
            Debug.Log(index);
            
            BookStart1[index].SetActive(false);
            index++;
            BookStart1[index].SetActive(true);
           
            //if(index == 3) 스토리 끝나면 
        }
    }
}
