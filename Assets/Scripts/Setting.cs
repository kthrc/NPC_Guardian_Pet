using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class Setting : MonoBehaviour
{
    public GameObject SettingPop;
    public GameObject SoundPop;
    public GameObject CardPop;

    public GameObject[] CardPopEle; // 카드 팝업 요소(카드 확대샷 할 때 요소 없애야됨)
    public GameObject SelectedCard; // 선택된 카드(for 팝업!)
    public GameObject SwitchBtn; // 선택된 카드 옆에 생기는 전환 버튼 오브젝트
    public GameObject CloseupCardXBtn;

    public static int idx = 0;
    public int tmp = 0;
    public GameObject[] ENTCard;
    public GameObject[] DentalCard;
    public GameObject[] EyeCard;

    public GameObject SoundManager;


    public void OnClick()
    {
        // Go To NextScene(for clickObject)

        GameObject clickObject = EventSystem.current.currentSelectedGameObject;
        if (clickObject.name == "SettingBtn") //
        {

            SettingPop.SetActive(true);
        }

        if (clickObject.name == "XBtn") //
        {
            SettingPop.SetActive(false);
        }

        if (clickObject.name == "SoundBtn") //
        {
            SettingPop.SetActive(false);
            SoundPop.SetActive(true);

        }
        if (clickObject.name == "SoundXBtn") //
        {
            SoundPop.SetActive(false);
            SoundManager.GetComponent<SoundManager>().OnSfx();
        }


        if (clickObject.name == "CardBtn") //
        {
            CardPop.SetActive(true);

        }

        if (clickObject.name == "CardXBtn") //
        {
            CardPop.SetActive(false);

        }
        if (clickObject.name == "CardChangeBtn") //
        {
            CardPop.SetActive(false);

        }
        if (clickObject == CloseupCardXBtn)
        {
            if (clickObject.name == "Eye1CloseupCardXBtn")
            {

                EyeCard[0].SetActive(false);

                for (int i = 0; i < 13; i++)
                    CardPopEle[i].SetActive(true);
            }

            if (clickObject.name == "Eye2CloseupCardXBtn")
            {

                EyeCard[0].SetActive(false);

                for (int i = 0; i < 13; i++)
                    CardPopEle[i].SetActive(true);
            }

            if (clickObject.name == "Eye3CloseupCardXBtn")
            {

                EyeCard[0].SetActive(false);

                for (int i = 0; i < 13; i++)
                    CardPopEle[i].SetActive(true);
            }

            if (clickObject.name == "ENT1CloseupCardXBtn")
            {

                ENTCard[0].SetActive(false);

                for (int i = 0; i < 13; i++)
                    CardPopEle[i].SetActive(true);
            }

            if (clickObject.name == "ENT2CloseupCardXBtn")
            {

                ENTCard[0].SetActive(false);

                for (int i = 0; i < 13; i++)
                    CardPopEle[i].SetActive(true);
            }

            if (clickObject.name == "ENT3CloseupCardXBtn")
            {

                ENTCard[0].SetActive(false);

                for (int i = 0; i < 13; i++)
                    CardPopEle[i].SetActive(true);
            }

            if (clickObject.name == "Dental1CloseupCardXBtn")
            {

                DentalCard[0].SetActive(false);

                for (int i = 0; i < 13; i++)
                    CardPopEle[i].SetActive(true);
            }


            if (clickObject.name == "Dental2CloseupCardXBtn")
            {

                DentalCard[0].SetActive(false);

                for (int i = 0; i < 13; i++)
                    CardPopEle[i].SetActive(true);
            }
            if (clickObject.name == "Dental3CloseupCardXBtn")
            {

                DentalCard[0].SetActive(false);

                for (int i = 0; i < 13; i++)
                    CardPopEle[i].SetActive(true);
            }
        }
        if (clickObject.name == "EyeCard1") // touch card in inventory
        {
            //CardPop.SetActive(false);
            SettingPop.SetActive(false);
            //Debug.Log("tmp: " + tmp);

            //if (tmp == 0)
            {

                for (int i = 0; i < 13; i++)
                    CardPopEle[i].SetActive(false);
                SelectedCard = clickObject;
                Debug.Log(SelectedCard);

                Vector3 position = SelectedCard.transform.localPosition;
                position.x = -30;
                position.y = 27;
                SelectedCard.transform.localPosition = position;

                transform.localScale = new Vector3(0.6f, 0.6f, 0.6f);
                //SelectedCard.SetActive(true);

                EyeCard[0].SetActive(true);
                EyeCard[1].SetActive(false);
                //tmp++;
            }
            //SelectedCard.SetActive(true);
            SwitchBtn.SetActive(true);
            CloseupCardXBtn.SetActive(true);
        }


          if (clickObject.name == "EyeCard2") // touch card in inventory
            {
                //CardPop.SetActive(false);
                SettingPop.SetActive(false);
                Debug.Log("tmp: " + tmp);
                //Debug.Log("tmp: " + tmp);

                if (tmp == 0)
                //if (tmp == 0)
                {
                   for (int i = 0; i < 13; i++)
                       CardPopEle[i].SetActive(false);
                    SelectedCard = clickObject;
                    Debug.Log(SelectedCard);

                    Vector3 position = SelectedCard.transform.localPosition;
                    
                    position.x = 0;
                    position.y = 27;
                    SelectedCard.transform.localPosition = position;
                    transform.localScale = new Vector3(2f, 2f, 2f);
                    //SelectedCard.SetActive(true);

                    transform.localScale = new Vector3(0.6f, 0.6f, 0.6f);
                    //SelectedCard.SetActive(true);

                    EyeCard[0].SetActive(true);
                    EyeCard[1].SetActive(false);
                    //tmp++;
                }
                //SelectedCard.SetActive(true);
                SwitchBtn.SetActive(true);
                CloseupCardXBtn.SetActive(true);
            }

        if (clickObject.name == "EyeCard3") // touch card in inventory
        {
            //CardPop.SetActive(false);
            SettingPop.SetActive(false);
            //Debug.Log("tmp: " + tmp);

            //if (tmp == 0)
            {
                for (int i = 0; i < 13; i++)
                    CardPopEle[i].SetActive(false);
                SelectedCard = clickObject;
                Debug.Log(SelectedCard);

                Vector3 position = SelectedCard.transform.localPosition;
                position.x = 30;
                position.y = 27;
                SelectedCard.transform.localPosition = position;

                transform.localScale = new Vector3(0.6f, 0.6f, 0.6f);
                //SelectedCard.SetActive(true);

                EyeCard[0].SetActive(true);
                EyeCard[1].SetActive(false);
                //tmp++;
            }
            //SelectedCard.SetActive(true);
            SwitchBtn.SetActive(true);
            CloseupCardXBtn.SetActive(true);
        }

        if (clickObject.name == "ENTCard1") // touch card in inventory
        {
            //CardPop.SetActive(false);
            SettingPop.SetActive(false);
            //Debug.Log("tmp: " + tmp);

            //if (tmp == 0)
            {
                for (int i = 0; i < 13; i++)
                    CardPopEle[i].SetActive(false);
                SelectedCard = clickObject;
                Debug.Log(SelectedCard);

                Vector3 position = SelectedCard.transform.localPosition;
                position.x = -30;
                position.y = 0;
                SelectedCard.transform.localPosition = position;

                transform.localScale = new Vector3(0.6f, 0.6f, 0.6f);
                //SelectedCard.SetActive(true);

                ENTCard[0].SetActive(true);
                ENTCard[1].SetActive(false);
                tmp++;
                //tmp++;
            }
            //SelectedCard.SetActive(true);
            SwitchBtn.SetActive(true);
            CloseupCardXBtn.SetActive(true);
        }

        if (clickObject.name == "ENTCard2") // touch card in inventory
        {
            //CardPop.SetActive(false);
            SettingPop.SetActive(false);
            //Debug.Log("tmp: " + tmp);

            //if (tmp == 0)
            {
                for (int i = 0; i < 13; i++)
                    CardPopEle[i].SetActive(false);
                SelectedCard = clickObject;
                Debug.Log(SelectedCard);

                Vector3 position = SelectedCard.transform.localPosition;
                position.x = 0;
                position.y = -5;
                SelectedCard.transform.localPosition = position;

                transform.localScale = new Vector3(0.6f, 0.6f, 0.6f);
                //SelectedCard.SetActive(true);

                ENTCard[0].SetActive(true);
                ENTCard[1].SetActive(false);
                //tmp++;
            }
            //SelectedCard.SetActive(true);
            SwitchBtn.SetActive(true);
            CloseupCardXBtn.SetActive(true);
        }

        if (clickObject.name == "ENTCard3") // touch card in inventory
        {
            //CardPop.SetActive(false);
            SettingPop.SetActive(false);
            //Debug.Log("tmp: " + tmp);

            //if (tmp == 0)
            {
                for (int i = 0; i < 13; i++)
                    CardPopEle[i].SetActive(false);
                SelectedCard = clickObject;
                Debug.Log(SelectedCard);

                Vector3 position = SelectedCard.transform.localPosition;
                position.x = 30;
                position.y = -5;
                SelectedCard.transform.localPosition = position;

                transform.localScale = new Vector3(0.6f, 0.6f, 0.6f);
                //SelectedCard.SetActive(true);

                ENTCard[0].SetActive(true);
                ENTCard[1].SetActive(false);
                //tmp++;
            }
            //SelectedCard.SetActive(true);
            SwitchBtn.SetActive(true);
            CloseupCardXBtn.SetActive(true);
        }

        if (clickObject.name == "DentalCard1") // touch card in inventory
        {
            //CardPop.SetActive(false);
            SettingPop.SetActive(false);
            //Debug.Log("tmp: " + tmp);

            //if (tmp == 0)
            {
                for (int i = 0; i < 13; i++)
                    CardPopEle[i].SetActive(false);
                SelectedCard = clickObject;
                Debug.Log(SelectedCard);

                Vector3 position = SelectedCard.transform.localPosition;
                position.x = -30;
                position.y = -36;
                SelectedCard.transform.localPosition = position;

                transform.localScale = new Vector3(0.6f, 0.6f, 0.6f);
                //SelectedCard.SetActive(true);

                DentalCard[0].SetActive(true);
                DentalCard[1].SetActive(false);
                //tmp++;
            }
            //SelectedCard.SetActive(true);
            SwitchBtn.SetActive(true);
            CloseupCardXBtn.SetActive(true);
        }

        if (clickObject.name == "DentalCard2") // touch card in inventory
        {
            //CardPop.SetActive(false);
            SettingPop.SetActive(false);
            //Debug.Log("tmp: " + tmp);

            //if (tmp == 0)
            {
                for (int i = 0; i < 13; i++)
                    CardPopEle[i].SetActive(false);
                SelectedCard = clickObject;
                Debug.Log(SelectedCard);

                Vector3 position = SelectedCard.transform.localPosition;
                position.x = 0;
                position.y = -36;
                SelectedCard.transform.localPosition = position;

                transform.localScale = new Vector3(0.6f, 0.6f, 0.6f);
                //SelectedCard.SetActive(true);

                DentalCard[0].SetActive(true);
                DentalCard[1].SetActive(false);
                //tmp++;
            }
            //SelectedCard.SetActive(true);
            SwitchBtn.SetActive(true);
            CloseupCardXBtn.SetActive(true);
        }

        if (clickObject.name == "DentalCard3") // touch card in inventory
        {
            //CardPop.SetActive(false);
            SettingPop.SetActive(false);
            //Debug.Log("tmp: " + tmp);

            //if (tmp == 0)
            {
                for (int i = 0; i < 13; i++)
                    CardPopEle[i].SetActive(false);
                SelectedCard = clickObject;
                Debug.Log(SelectedCard);

                Vector3 position = SelectedCard.transform.localPosition;
                position.x = -30;
                position.y = -36;
                SelectedCard.transform.localPosition = position;

                transform.localScale = new Vector3(0.6f, 0.6f, 0.6f);
                //SelectedCard.SetActive(true);

                DentalCard[0].SetActive(true);
                DentalCard[1].SetActive(false);
                //tmp++;
            }
            //SelectedCard.SetActive(true);
            SwitchBtn.SetActive(true);
            CloseupCardXBtn.SetActive(true);
        }
    }

    public void OnSwitchBtn() // Eye
    {
        //SwitchBtn.SetActive(true); //
        Debug.Log("idx" + idx);
        /* SelectedCard = ENTCard[0]; // 할당 안 된대서 일단 할당;;
         SelectedCard.SetActive(false); // 어차피 사용 안 할거임..
 */
        if ((idx % 2) == 1)
        {
            /*Vector3 pos = ENTCard[0].transform.localPosition;
            pos.x = 0;
            pos.y = 0;
            ENTCard[0].transform.localPosition = pos;
            transform.localScale = new Vector3(1f, 1f, 1f);*/
            ENTCard[0].SetActive(true);
            ENTCard[1].SetActive(false);
            
            /*SelectedCard = ENTCard[0]; // 할당 안 된대서 일단 할당;;
            SelectedCard.SetActive(true);*/
        }
        else if ((idx % 2) == 0)
        {
            /*Vector3 position = ENTCard[1].transform.localPosition;
            position.x = 0;
            position.y = 0;
            ENTCard[1].transform.localPosition = position;
            transform.localScale = new Vector3(1f, 1f, 1f);*/
            ENTCard[0].SetActive(false);
            ENTCard[1].SetActive(true);
            
            /*SelectedCard = ENTCard[1]; // 할당 안 된대서 일단 할당;;
            SelectedCard.SetActive(true);*/
        }
        idx++;
    }
}
