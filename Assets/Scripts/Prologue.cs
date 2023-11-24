using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class Prologue : MonoBehaviour
{

    // 시작화면 -> 일러 -> 메인

    // Card Choice
    public GameObject Book;

    // Card -> Book
    public GameObject[] BookStart; // 
    /* public GameObject[] BookStart2;
     public GameObject[] BookStart3;*/

    // Mission -> BookEnding
    public GameObject BookEnding1;
    
    // BookEnding -> Success(Get Card!)
    public GameObject Success1;
    
    public int cnt = 0;
    public static int index = 0;

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
            if (index == 3) //스토리 끝나면 
            {
                Invoke("B1ToM1", 0.02f);
                index = 0;
            }
        }
    }
}
