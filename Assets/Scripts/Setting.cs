using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class Setting : MonoBehaviour
{
    public GameObject SettingPop;

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
        // Go To NextScene(for clickObject)

        GameObject clickObject = EventSystem.current.currentSelectedGameObject;
        if (clickObject.name == "SettingBtn") //
        {
            //SceneManager.LoadScene(""); //

            SettingPop.SetActive(true);
        }
    }
}
