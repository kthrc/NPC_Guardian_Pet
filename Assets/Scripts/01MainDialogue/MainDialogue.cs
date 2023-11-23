using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using TMPro;
using System;

public class MainDialogue : MonoBehaviour
{
    public TextMeshProUGUI textComponent;
    public string[] sentences = { "������ � �̾߱⸦ ������?", "��� �������� ������?", 
                                    "��ȣ����� ���� �������� �ִ� �� ����.", 
                                    "�� ���� Ȯ���غþ�?! ��ó�� �Ϳ��� ģ������ ���ִ�!",
                                    "Ȥ�� ���ӿ� ������ �ִٸ�, �������ڴ��б� ���Ƹ� NPC�� �˷���!" };
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
