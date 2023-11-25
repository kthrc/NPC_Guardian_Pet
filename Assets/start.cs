using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.SceneManagement;

public class start : MonoBehaviour
{
    public void starPrologue()
    {
        SceneManager.LoadScene("2_Prologue");
    }
}
