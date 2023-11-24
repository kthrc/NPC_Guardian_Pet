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

            if (DentalMission.DenState[i] == 1)
            {
                ClearCard[i].SetActive(true);

                Vector3 po = ClearCard[i].transform.localPosition;
                po.x = 0;
                po.y = 0;
                ClearCard[i].transform.localPosition = po;
                transform.localScale = new Vector3(1.3f, 1.3f, 1.3f);
            }
            /*if (DentalMission.DenState[i] == 1)  
            {
                ClearCard[(i+3)].SetActive(true);
            }
            if (DentalMission.DenState[i] == 1)  
            {
                ClearCard[(i+6)].SetActive(true);
            }*/
        }
    }
}