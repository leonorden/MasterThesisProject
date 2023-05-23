using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;

public class AudioAndHapticOnTrigger : MonoBehaviour
{
    
    private AudioSource source;
    public AudioClip clip;
    
    public string rightHandTargetTag;
    public string leftHandTargetTag;
    public XRGrabInteractable drumstick1;
    public XRGrabInteractable drumstick2;
    public XRBaseController leftController;
    public XRBaseController rightController;
    public string drumstickTargetTag;
    [Range(0,1)]
    public float intensity;
    public float duration;
    
    private void Start()
    {
        source = GetComponent<AudioSource>();
    }
    
    private void OnTriggerEnter(Collider other)
    {

        if (other.CompareTag(drumstickTargetTag))
        {
            source.PlayOneShot(clip);
        }
        
        if (drumstick1.isSelected && other.gameObject.CompareTag(rightHandTargetTag))
        {
            rightController.SendHapticImpulse(intensity, duration);
        }
        else if (drumstick1.isSelected && other.gameObject.CompareTag(leftHandTargetTag))
        {
            leftController.SendHapticImpulse(intensity, duration);
        }
        
        if (drumstick2.isSelected && other.gameObject.CompareTag(rightHandTargetTag))
        {
            rightController.SendHapticImpulse(intensity, duration);
        } 
        if (drumstick2.isSelected && other.gameObject.CompareTag(leftHandTargetTag))
        {
            leftController.SendHapticImpulse(intensity, duration);
        }
    }


   
}
