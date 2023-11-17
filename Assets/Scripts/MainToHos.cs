using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class MainToHos : MonoBehaviour
{
    // Start is called before the first frame update
    public GameObject Main_EyeBtn;
    public GameObject Main_ENTBtn;
    public GameObject Main_DentalBtn;

    public void OnClick()
    {
        GameObject clickObject = EventSystem.current.currentSelectedGameObject;

        if(clickObject == Main_DentalBtn)
        {
            SceneManager.LoadScene("Dental");
        }

        if (clickObject == Main_EyeBtn)
        {
            SceneManager.LoadScene("Eye");
        }

        if (clickObject == Main_ENTBtn)
        {
            SceneManager.LoadScene("ENT");
        }
    }
}
