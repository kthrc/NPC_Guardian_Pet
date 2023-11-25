using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class prologueScene : MonoBehaviour
{
    public GameObject Book;
    public GameObject[] BookStart;
    public GameObject nextBtn;
    int idx = 0;
    public void next()
    {
        idx++;
        for (int i = 0; i < BookStart.Length; i++)
        {
            BookStart[i].SetActive(false);
            BookStart[idx].SetActive(true);
        }
        SceneManager.LoadScene("3_main");
    }
}
