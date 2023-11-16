using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class Main_ToHosptial : MonoBehaviour
{
    // Start is called before the first frame update
    public void OnHosClick()
    {
        GameObject clickObject = EventSystem.current.currentSelectedGameObject;
        if (clickObject.name == "Main_ENTBtn")
        {
            SceneManager.LoadScene("ENT");
        }
        if (clickObject.name == "Main_EyeBtn")
        {
            SceneManager.LoadScene("Eye");
        }
        if (clickObject.name == "Main_DentalBtn")
        {
            SceneManager.LoadScene("Dental");
        }
    }
}
