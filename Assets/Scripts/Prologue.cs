using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class Prologue : MonoBehaviour
{

    // ����ȭ�� -> �Ϸ� -> ����

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
    }
}
