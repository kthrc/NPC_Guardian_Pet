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
            if (DentalMission.DenState[i] == 1) // 치과미션 첫번째 미션 성공이면
            {
                ClearCard[i].SetActive(true);

                // x값은 다르고 y값은 같아야함
                Vector3 po = ClearCard[i].transform.localPosition;
                po.x = 0; // for문 돌려서 x+i이런 식으로 돌리면 될 듯
                po.y = 0;
                ClearCard[i].transform.localPosition = po;
                transform.localScale = new Vector3(1.3f, 1.3f, 1.3f);
            }
            /*if (DentalMission.DenState[i] == 1) // 이비인후과미션 첫번째 미션 성공이면
            {
                ClearCard[(i+3)].SetActive(true);
            }
            if (DentalMission.DenState[i] == 1) // 안과미션 첫번째 미션 성공이면
            {
                ClearCard[(i+6)].SetActive(true);
            }*/
        }
    }
}
