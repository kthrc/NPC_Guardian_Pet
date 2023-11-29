using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class PrologueText : MonoBehaviour
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

            //ũ�� �� ��ġ
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
        if (cnt == 2)
        {

            OnDoubleClick();
        }
    }

    public void OnDoubleClick()
    {
        Debug.Log("Double Click " + cnt);

        GameObject clickObj = EventSystem.current.currentSelectedGameObject;

        // Choice Card1 ����ī��1
        if (clickObj.name == "DentalCard1" && SelectedCard == DentalCard1 && cnt == 2) //
        {
            DentalCard1.SetActive(false);
            DentalCard2.SetActive(false);
            DentalCard3.SetActive(false);

            SelectedCard = DentalCard1;
            //SelectedCard.position = new Vector2(0, 0);

            // ���õ� ī�� x, y �� ������ �� ����
            Vector3 position = SelectedCard.transform.localPosition;
            position.x = 100;
            position.y = 950;
            SelectedCard.transform.localPosition = position;

            //���� ������ ���� ����
            transform.localScale = new Vector3(0.7f, 0.7f, 0.7f);

            //SelectedCard.SetActive(true);

            //�˾� å (ȸ�� ���)
            SelectedCard.SetActive(false);
            Book.SetActive(true); // ���丮�� �̵�
            /*BookStart[0].SetActive(true);
            SelectedCard.SetActive(false);*/
            //BookStart1.SetActive(true);

        }
        // Choice Card2 ����ī�� 2
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

            //�˾� å 
            //Book.SetActive(true);
            /*  BookStart[0].SetActive(true);
              SelectedCard.SetActive(false);
  */
            SelectedCard.SetActive(false);
            Book.SetActive(true); // ���丮�� �̵�
        }
        // Choice Card3 ����ī�� 3
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

            //�˾� å 
            //Book.SetActive(true);
            //BookNextBtn.SetActive(true);

            SelectedCard.SetActive(false);
            Book.SetActive(true); // ���丮�� �̵�
        }
        cnt++;
    }

    public void B1ToM1() // å���� �̼����� �Ѿ�� Invoke �Լ��� �ʿ��� �Լ�
    {
        //�̾߱� 1���� �̼�1�� �Ѿ
        Book.SetActive(false);

        Mission1.SetActive(true);

        // å -> �̼� �Ŀ� ���� ������ ���� ����� ���õ� ī�� ������!
        SelectedCard = DentalCard1;

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
        SelectedCard = DentalCard2;

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
        SelectedCard = DentalCard3;

        Vector3 position = SelectedCard.transform.localPosition;
        position.x = 100;
        position.y = 950;
        SelectedCard.transform.localPosition = position;

        //���� ������ ���� ����
        transform.localScale = new Vector3(0.7f, 0.7f, 0.7f);

        //SelectedCard.SetActive(true);
    }
    //BookStart �Լ�(ī�� ���� �� �̾߱� ����!)
    public void OnNextClick()
    {
        GameObject obj = EventSystem.current.currentSelectedGameObject;

        //index++;

        // �̾߱� 1 next btn
        if (obj.name == "BookNextBtn1") //
        {
            Debug.Log("Ŭ�� �۵�");
            Debug.Log(index);

            BookStart[index].SetActive(false);
            index++;
            if (index != 5) // ���丮 �� ������
            {
                BookStart[index].SetActive(true);
            }
            if (index == 5) //���丮 ������ 
            {
                SceneManager.LoadScene("3_Main");
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
