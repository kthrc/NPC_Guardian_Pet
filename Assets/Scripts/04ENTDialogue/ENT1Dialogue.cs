using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using TMPro;
using System;

public class ENT1Dialogue : MonoBehaviour
{
    public TextMeshProUGUI textComponent;
    public string[] senetences;
    public float textSpeed;

    private int idx;

    void Start()
    {
        textComponent.text = string.Empty;
        StartDialogue();
    }

    void Update()
    {
        if (Input.GetMouseButtonDown(0))
        {
            if (textComponent.text == senetences[idx])
            {
                NextLine();
            }
            else
            {
                StopAllCoroutines();
                textComponent.text = senetences[idx];
            }
        }
    }

    void StartDialogue()
    {
        idx = 0;
        StartCoroutine(TypeLine());
    }

    IEnumerator TypeLine()
    {
        foreach (char c in senetences[idx].ToCharArray())
        {
            textComponent.text += c;
            yield return new WaitForSeconds(textSpeed);
        }
    }

    void NextLine()
    {
        if (idx < senetences.Length - 1)
        {
            idx++;
            textComponent.text = string.Empty;
            StartCoroutine(TypeLine());
        }
        else
        {
            gameObject.SetActive(false);
        }

    }
}
