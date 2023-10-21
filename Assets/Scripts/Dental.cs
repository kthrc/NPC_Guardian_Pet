using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class Dental : MonoBehaviour
{
    public GameObject DentalCard1;
    public GameObject DentalCard2;
    public GameObject DentalCard3;

    public GameObject SelectedCard;

    public int cnt = 0;

   /* float screenHeightHalf = Camera.main.orthographicSize;
    float screenWidthHalf = screenHeightHalf * Camera.main.aspect;*/

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
        GameObject clickObject = EventSystem.current.currentSelectedGameObject;

        // choice 1
        if (clickObject.name == "DentalCard1") //
        {
            DentalCard1.SetActive(false);
            DentalCard2.SetActive(false);
            DentalCard3.SetActive(false);

            SelectedCard = DentalCard1;
            //SelectedCard.position = new Vector2(0, 0);
            Vector3 position = SelectedCard.transform.localPosition;
            position.x = 0;
            position.y = 0;
            SelectedCard.transform.localPosition = position;

            SelectedCard.SetActive(true);
            cnt = 1;
            
            
        }

        // choice 2
        if (clickObject.name == "DentalCard2") //
        {
            DentalCard1.SetActive(false);
            DentalCard2.SetActive(false);
            DentalCard3.SetActive(false);

            SelectedCard = DentalCard2;
            //SelectedCard.position = new Vector2(0, 0);
            Vector3 position = SelectedCard.transform.localPosition;
            position.x = 0;
            position.y = 0;
            SelectedCard.transform.localPosition = position;

            SelectedCard.SetActive(true);

        }

        // choice 3
        if (clickObject.name == "DentalCard3") //
        {
            DentalCard1.SetActive(false);
            DentalCard2.SetActive(false);
            DentalCard3.SetActive(false);

            SelectedCard = DentalCard3;
            //SelectedCard.position = new Vector2(0, 0);
            Vector3 position = SelectedCard.transform.localPosition;
            position.x = 0;
            position.y = 0;
            SelectedCard.transform.localPosition = position;

            SelectedCard.SetActive(true);
        }


        
    }
}
