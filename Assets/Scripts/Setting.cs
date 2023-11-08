using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class Setting : MonoBehaviour
{
    public GameObject SettingPop; // 설정 팝업
    public GameObject SoundPop; // 소리 팝업
    public GameObject CardPop; // 카드 팝업
    public GameObject[] CardPopEle; // 카드 팝업 요소(카드 확대샷 할 때 요소 없애야됨)
    public GameObject SelectedCard; // 선택된 카드(for 팝업!)
    public GameObject SwitchBtn; // 선택된 카드 옆에 생기는 전환 버튼 오브젝트

    public static int idx = 0;
    public int tmp = 0;
    public GameObject[] ENTCard;
    public GameObject[] DentalCard;
    public GameObject[] EyeCard;
    // 알람 팝업

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
        if (clickObject.name == "CardXBtn") //
        {
            CardPop.SetActive(false);
        }
        if (clickObject.name == "SoundBtn") //
        {
            SettingPop.SetActive(false);
            SoundPop.SetActive(true);

        }
        if (clickObject.name == "SoundXBtn") //
        {
            SoundPop.SetActive(false);
        }
        if (clickObject.name == "NotiBtn") //
        {
           
           
        }

        if (clickObject.name == "CardBtn") // 펫 도감
        {
            CardPop.SetActive(true);

            
        }
        if (clickObject.name == "CardXBtn") // 펫 도감 X 버튼
        {
            CardPop.SetActive(false);

        }

        if (clickObject.name == "ENTCard1")
        {
            //CardPop.SetActive(false);
            SettingPop.SetActive(false);

            Debug.Log("tmp: " + tmp);
            
            if (tmp == 0)
            {
                for(int i = 0; i<7; i++)
                    CardPopEle[i].SetActive(false);

                SelectedCard = clickObject;

                Vector3 position = SelectedCard.transform.localPosition;
                position.x = 50;
                position.y = -400;
                SelectedCard.transform.localPosition = position;
                transform.localScale = new Vector3(2f, 2f, 2f);

                SelectedCard.SetActive(true);
                ENTCard[0].SetActive(true);
                ENTCard[1].SetActive(false);
                tmp++;
            }

            //SelectedCard.SetActive(true);
            SwitchBtn.SetActive(true);
            

        }

        
    }
    // 카드 전환 버튼 누르면(SwitchBtn)
    public void OnSwitchBtn()
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
