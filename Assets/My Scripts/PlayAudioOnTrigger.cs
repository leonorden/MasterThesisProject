using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;

public class PlayAudioOnTrigger : MonoBehaviour
{
    
    public string rightHandTargetTag;
    public string leftHandTargetTag;
    
    public AudioClip clip;
    private AudioSource source;


    private void Start()
    {
        source = GetComponent<AudioSource>();
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.CompareTag(rightHandTargetTag))
        {
            source.PlayOneShot(clip);
        }
        if (other.gameObject.CompareTag(leftHandTargetTag))
        {
            source.PlayOneShot(clip);
        }
        
    }
}
