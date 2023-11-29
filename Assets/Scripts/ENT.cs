using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class ENT : MonoBehaviour
{
    // Card Choice
    public GameObject ENTCard1;
    public GameObject ENTCard2;
    public GameObject ENTCard3;

    public GameObject SelectedCard;
    public GameObject Book;

    // Card -> Book
    public GameObject[] BookStart;
    /*public GameObject BookStart1;
    public GameObject BookStart2;
    public GameObject BookStart3;*/

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

    /* float screenHeightHalf = Camera.main.orthographicSize;
     float screenWidthHalf = screenHeightHalf * Camera.main.aspect;*/

    // Start is called before the first frame update
    public void ReadyCard(bool b1, bool b2, bool b3)
    {
        if (b1 == false && b2 == false && b3 == false)
        {
            SceneManager.LoadScene("3_Main");
        }

        ENTCard1.SetActive(b1);
        ENTCard2.SetActive(b2);
        ENTCard3.SetActive(b3);

    }

    public void OnClick()
    {
        GameObject clickObject = EventSystem.current.currentSelectedGameObject;

        // choice 1
        if (clickObject.name == "ENTCard1") //
        {
            ENTCard1.SetActive(false);
            ENTCard2.SetActive(false);
            ENTCard3.SetActive(false);

            SelectedCard = ENTCard1;

            /*tmp = SelectedCard;
            SelectedCard = ENTCard1;
            ENTCard1 = tmp;*/

            //SelectedCard.position = new Vector2(0, 0);
            //ũ�� �� ��ġ
            Vector3 position = SelectedCard.transform.localPosition;
            position.x = 0;
            position.y = 0;
            SelectedCard.transform.localPosition = position;
            transform.localScale = new Vector3(1.5f, 1.5f, 1.5f);

            //SelectedCard.SetActive(true);
            //cnt = 1;


        }

        // choice 2
        if (clickObject.name == "ENTCard2") //
        {
            ENTCard1.SetActive(false);
            ENTCard2.SetActive(false);
            ENTCard3.SetActive(false);

            SelectedCard = ENTCard2;
            //SelectedCard.position = new Vector2(0, 0);
            Vector3 position = SelectedCard.transform.localPosition;
            position.x = 0;
            position.y = 0;
            SelectedCard.transform.localPosition = position;
            transform.localScale = new Vector3(1.5f, 1.5f, 1.5f);

            //SelectedCard.SetActive(true);
        }

        // choice 3
        if (clickObject.name == "ENTCard3") //
        {
            ENTCard1.SetActive(false);
            ENTCard2.SetActive(false);
            ENTCard3.SetActive(false);

            SelectedCard = ENTCard3;
            //SelectedCard.position = new Vector2(0, 0);
            Vector3 position = SelectedCard.transform.localPosition;
            position.x = 0;
            position.y = 0;
            SelectedCard.transform.localPosition = position;
            transform.localScale = new Vector3(1.5f, 1.5f, 1.5f);

            //SelectedCard.SetActive(true);
        }

        cnt++;
        Debug.Log("Click " + cnt);
        if (cnt == 1)
        {

            OnDoubleClick();
        }
    }

    public void OnDoubleClick()
    {
        Debug.Log("Double Click " + cnt);

        GameObject clickObj = EventSystem.current.currentSelectedGameObject;

        // Choice Card1
        if (clickObj.name == "ENTCard1" && SelectedCard == ENTCard1) //
        {
            ENTCard1.SetActive(false);
            ENTCard2.SetActive(false);
            ENTCard3.SetActive(false);

            SelectedCard = ENTCard1;
            //SelectedCard.position = new Vector2(0, 0);
            Vector3 position = SelectedCard.transform.localPosition;
            position.x = 100;
            position.y = 950;
            SelectedCard.transform.localPosition = position;

            //���� ������ ���� ����
            transform.localScale = new Vector3(0.7f, 0.7f, 0.7f);

            SelectedCard.SetActive(false);

            //�˾� å 
            Book.SetActive(true);

        }
        // Choice Card2
        if (clickObj.name == "ENTCard2" && SelectedCard == ENTCard2) //
        {
            ENTCard1.SetActive(false);
            ENTCard2.SetActive(false);
            ENTCard3.SetActive(false);

            SelectedCard = ENTCard2;
            //SelectedCard.position = new Vector2(0, 0);
            Vector3 position = SelectedCard.transform.localPosition;
            position.x = 100;
            position.y = 950;
            SelectedCard.transform.localPosition = position;

            transform.localScale = new Vector3(0.7f, 0.7f, 0.7f);

            SelectedCard.SetActive(false);

            //�˾� å 
            Book.SetActive(true);

        }
        // Choice Card3
        if (clickObj.name == "ENTCard3" && SelectedCard == ENTCard3) //
        {
            ENTCard1.SetActive(false);
            ENTCard2.SetActive(false);
            ENTCard3.SetActive(false);

            SelectedCard = ENTCard3;
            //SelectedCard.position = new Vector2(0, 0);
            Vector3 position = SelectedCard.transform.localPosition;
            position.x = 100;
            position.y = 950;
            SelectedCard.transform.localPosition = position;

            transform.localScale = new Vector3(0.7f, 0.7f, 0.7f);

            SelectedCard.SetActive(false);

            //�˾� å 
            Book.SetActive(true);

        }
        cnt++;
    }
    public void B1ToM1() // å���� �̼����� �Ѿ�� Invoke �Լ��� �ʿ��� �Լ�
    {
        //�̾߱� 1���� �̼�1�� �Ѿ
        Book.SetActive(false);

        Mission1.SetActive(true);

        // å -> �̼� �Ŀ� ���� ������ ���� ����� ���õ� ī�� ������!
        SelectedCard = ENTCard1;

        // ���õ� ī�� x, y �� ������ �� ����
        Vector3 position = SelectedCard.transform.localPosition;
        position.x = 100;
        position.y = 950;
        SelectedCard.transform.localPosition = position;

        //���� ������ ���� ����
        transform.localScale = new Vector3(0.7f, 0.7f, 0.7f);

        //SelectedCard.SetActive(true);

    }
    public void B2ToM4() // å���� �̼����� �Ѿ�� Invoke �Լ��� �ʿ��� �Լ�
    {
        //�̾߱� 2���� �̼�4�� �Ѿ
        Book.SetActive(false);

        Mission4.SetActive(true);
        //////////////////////////////////////
        SelectedCard = ENTCard2;

        Vector3 position = SelectedCard.transform.localPosition;
        position.x = 100;
        position.y = 950;
        SelectedCard.transform.localPosition = position;

        //���� ������ ���� ����
        transform.localScale = new Vector3(0.7f, 0.7f, 0.7f);

        //SelectedCard.SetActive(true);
    }
    public void B3ToM7() // å���� �̼����� �Ѿ�� Invoke �Լ��� �ʿ��� �Լ�
    {
        //�̾߱� 3���� �̼�6�� �Ѿ
        Book.SetActive(false);

        Mission7.SetActive(true);
        //////////////////////////////////////
        SelectedCard = ENTCard3;

        Vector3 position = SelectedCard.transform.localPosition;
        position.x = 100;
        position.y = 950;
        SelectedCard.transform.localPosition = position;

        //���� ������ ���� ����
        transform.localScale = new Vector3(0.7f, 0.7f, 0.7f);

        //SelectedCard.SetActive(true);
    }
    public void OnNextClick()
    {
        GameObject obj = EventSystem.current.currentSelectedGameObject;

        // �̾߱� 1 next btn
        if (obj.name == "BookNextBtn1") //
        {
            Debug.Log("Ŭ�� �۵�");
            Debug.Log(index);

            BookStart[index].SetActive(false);
            index++;
            if (index != 3) // ���丮 �� ������
            {
                BookStart[index].SetActive(true);
            }
            if (index == 3) //���丮 ������ 
            {
                Invoke("B1ToM1", 0.02f);
                index = 0;
            }
        }


        if (obj.name == "BookNextBtn2") //
        {
            Debug.Log("Ŭ�� �۵�");
            Debug.Log(index);

            BookStart[index].SetActive(false);
            index++;
            if (index != 3) // ���丮 �� ������
            {
                BookStart[index].SetActive(true);
            }
            if (index == 3) //���丮 ������ 
            {
                Invoke("B2ToM4", 0.02f);
                index = 0;
            }
        }

        if (obj.name == "BookNextBtn3") //
        {
            Debug.Log("Ŭ�� �۵�");
            Debug.Log(index);

            BookStart[index].SetActive(false);
            index++;
            if (index != 3) // ���丮 �� ������
            {
                BookStart[index].SetActive(true);
            }
            if (index == 3) //���丮 ������ 
            {
                Invoke("B3ToM7", 0.02f);
                index = 0;
            }
        }
    }
}
