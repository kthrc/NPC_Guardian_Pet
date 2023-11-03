// !!사용 안 함!!(북아이콘 용 스크립트)
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class ClickBookIcon : MonoBehaviour
{
    //
    public GameObject DentalBookIcon1;
    public GameObject DentalBookIcon2;
    public GameObject DentalBookIcon3;

    public GameObject Book;
    public GameObject[] BookStart;

    public static int idx = 0;

    public GameObject Mission1;
    public GameObject Mission2;
    public GameObject Mission3;

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

        if(clickObject == DentalBookIcon1 || clickObject.name == "BookNextBtn")
        {
            Debug.Log("클릭 작동");
            Debug.Log(idx);

            Mission1.SetActive(false);
            Book.SetActive(true); //
            //BookStart[idx].SetActive(true);
            //idx++;
            if (idx != 3)
            {
                BookStart[idx].SetActive(true);
                idx++;
            }
            if (idx == 3) //스토리 끝나면 
            {
                Mission1.SetActive(true);
                idx = 0;
            }
        }

        if (clickObject == DentalBookIcon2 || clickObject.name == "BookNextBtn")
        {
            Debug.Log("클릭 작동");
            Debug.Log(idx);

            Mission2.SetActive(false);
            Book.SetActive(true); //
            //BookStart[idx].SetActive(true);
            //idx++;
            if (idx != 3)
            {
                BookStart[idx].SetActive(true);
                idx++;
            }
            if (idx == 3) //스토리 끝나면 
            {
                Mission2.SetActive(true);
                idx = 0;
            }
        }

        if (clickObject == DentalBookIcon3 || clickObject.name == "BookNextBtn")
        {
            Debug.Log("클릭 작동");
            Debug.Log(idx);

            Mission3.SetActive(false);
            Book.SetActive(true); //
            //BookStart[idx].SetActive(true);
            //idx++;
            if (idx != 3)
            {
                BookStart[idx].SetActive(true);
                idx++;
            }
            if (idx == 3) //스토리 끝나면 
            {
                Mission3.SetActive(true);
                idx = 0;
            }
        }


    }

}
