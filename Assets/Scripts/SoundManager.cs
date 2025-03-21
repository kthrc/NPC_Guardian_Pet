﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class SoundManager : MonoBehaviour
{
    public AudioSource bgm;
    public AudioSource sfx;

    public void SetBgmVolume(float volume)
    {
        bgm.volume = volume;
    }
    public void SetSfxVolume(float volume)
    {
        sfx.volume = volume;
    }

    public void OnSfx()
    {
        sfx.Play();
    }
}
