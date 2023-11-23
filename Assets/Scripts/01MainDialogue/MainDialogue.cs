using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using TMPro;
using System;

public class MainDialogue : MonoBehaviour
{
    public TextMeshProUGUI textComponent;
    public string[] sentences = { "오늘은 어떤 이야기를 들을까?", "어느 병원으로 가볼까?", 
                                    "수호펫들이 점점 많아지고 있는 것 같아.", 
                                    "펫 도감 확인해봤어?! 나처럼 귀여운 친구들이 모여있대!",
                                    "혹시 게임에 문제가 있다면, 동덕여자대학교 동아리 NPC로 알려줘!" };
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
            if (textComponent.text == sentences[idx])
            {
                NextLine();
            }
            else
            {
                StopAllCoroutines();
                textComponent.text = sentences[idx];
            }
        }
    }

    void StartDialogue()
    {
        idx = UnityEngine.Random.Range(0, sentences.Length);
        StartCoroutine(TypeLine());
    }

    IEnumerator TypeLine()
    {
        foreach (char c in sentences[idx].ToCharArray())
        {
            textComponent.text += c;
            yield return new WaitForSeconds(textSpeed);
        }
    }

    void NextLine()
    {
        if (idx < sentences.Length - 1)
        {
            idx = UnityEngine.Random.Range(0, sentences.Length);
            textComponent.text = string.Empty;
            StartCoroutine(TypeLine());
        }
        else
        {
            gameObject.SetActive(false);
        }
    }
}
