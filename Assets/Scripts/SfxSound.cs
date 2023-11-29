using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SfxSound : MonoBehaviour
{
    public GameObject SoundManager;

    public void ClickSound()
    {
        SoundManager.GetComponent<SoundManager>().OnSfx();
    }
}
