using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;
public class HapticOnTrigger : MonoBehaviour
{
    
    public string rightHandTargetTag;
    public string leftHandTargetTag;

    public XRBaseController leftController;
    public XRBaseController rightController;

    [Range(0,1)]
    public float intensity;
    public float duration;
    
   
    
    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.CompareTag(rightHandTargetTag))
        {
            rightController.SendHapticImpulse(intensity, duration);
        }
        if (other.gameObject.CompareTag(leftHandTargetTag))
        {
            leftController.SendHapticImpulse(intensity, duration);
        }
        
    }
}
