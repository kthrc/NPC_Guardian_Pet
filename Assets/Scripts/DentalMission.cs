using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class DentalMission : MonoBehaviour
{
    public GameObject M1; // M1 ������Ʈ

    public GameObject M1_Eye; // �̼� 1 (���� ���߱�)
    public GameObject M1_ENT;
    public GameObject M1_Dental;

    public GameObject M1_OBtn; // �¾Ҵ��� �ƴ��� OX ���
    public GameObject M1_XBtn1;
    public GameObject M1_XBtn2;

    public Text GuardianPetText; // Ʋ���� �� �� �� ����

    public int M1_end = 0; // flag ��
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void OnM1Click()
    {
        GameObject clickObject = EventSystem.current.currentSelectedGameObject;

        if(M1_end == 1) // flag end �� 1�̸� ����
        {
            M1.SetActive(false);

        }
        if(clickObject == M1_Eye) // X ����ϰ� ���� ��������ߵ�
        {
            M1_XBtn1.SetActive(true); //X���
            GuardianPetText.text = "�ٽ� �� �� �����غ�";
        }

        if (clickObject == M1_ENT) // X ����ϰ� ���� ��������ߵ�
        {
            M1_XBtn2.SetActive(true); //X���
            GuardianPetText.text = "�ٽ� �� �� �����غ�";
        }

        if (clickObject == M1_Dental) // O ���
        {
            M1_OBtn.SetActive(true); //
            GuardianPetText.text = "���߾�!(�ӽ�)"; // ���� �����ؼ� �׳� �߰�..

            M1_end = 1; // flag ��
        }
    }
}
