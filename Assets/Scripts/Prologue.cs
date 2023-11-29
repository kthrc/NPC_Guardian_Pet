using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class Prologue : MonoBehaviour
{
    public GameObject Book;
    public GameObject[] BookStart;
    public GameObject nextBtn;

    int index = 0;
/*
   public void onNextClick()
    {
        GameObject next = EventSystem.current.currentSelectedGameObject;

        if (next.name == "BookNextBtn1") //
        {
            Debug.Log("클릭 작동");
            Debug.Log(index);

            BookStart[index].SetActive(false);
            index++;
            if (index != 5) // 스토리 안 끝나면
            {
                BookStart[index].SetActive(true);
            }
            if (index == 5) //스토리 끝나면 
            {
                SceneManager.LoadScene("3_Main");
            }
        }
    }*/

    public void Next()
    {
        GameObject next = EventSystem.current.currentSelectedGameObject;

        if (next.name == "BookNextBtn1") //
        {
            Debug.Log("클릭 작동");
            Debug.Log(index);

            BookStart[index].SetActive(false);
            index++;
            if (index != 5) // 스토리 안 끝나면
            {
                BookStart[index].SetActive(true);
            }
            if (index == 5) //스토리 끝나면 
            {
                SceneManager.LoadScene("3_Main");
            }
        }
    }
}
