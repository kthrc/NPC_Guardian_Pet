using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Inventory : MonoBehaviour
{
    public static int[] DenState;
    public static int[] ENTState;
    public static int[] EyeState;

    public GameObject[] ClearCard;

    public void State()
    {
        for (int i = 0; i < 3; i++)
        {
            //
            if (DentalMission.DenState[i] == 1) // ġ���̼� ù��° �̼� �����̸�
            {
                ClearCard[i].SetActive(true);

                // x���� �ٸ��� y���� ���ƾ���
                Vector3 po = ClearCard[i].transform.localPosition;
                po.x = 0; // for�� ������ x+i�̷� ������ ������ �� ��
                po.y = 0;
                ClearCard[i].transform.localPosition = po;
                transform.localScale = new Vector3(1.3f, 1.3f, 1.3f);
            }
            /*if (DentalMission.DenState[i] == 1) // �̺����İ��̼� ù��° �̼� �����̸�
            {
                ClearCard[(i+3)].SetActive(true);
            }
            if (DentalMission.DenState[i] == 1) // �Ȱ��̼� ù��° �̼� �����̸�
            {
                ClearCard[(i+6)].SetActive(true);
            }*/
        }
    }
}
