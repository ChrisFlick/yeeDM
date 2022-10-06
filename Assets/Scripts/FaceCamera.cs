using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FaceCamera : MonoBehaviour
{
    public bool isPhoneInterface = false;
    public bool isAttachedToPhone = false;
    public Vector3 initialLocation;


    public Transform target;
    public float smoothTime = 0.3F;
    private Vector3 velocity = Vector3.zero;


    void Start()
    {
        initialLocation = transform.position;
        target = Camera.main.transform;
    }

    // Update is called once per frame
    void Update()
    {

        if(Vector3.Distance(transform.position, Camera.main.transform.position) < 1.5f)
        {
            isAttachedToPhone = true;
        }
        else
        {
            isAttachedToPhone = false;
        }
        if (isPhoneInterface)
        {
            if (!isAttachedToPhone)
            {
                transform.LookAt(Camera.main.transform);
                transform.position = Vector3.SmoothDamp(transform.position, initialLocation, ref velocity, smoothTime);
            }
            else
            {
                Vector3 targetPosition = target.TransformPoint(new Vector3(0, 0, 0.6f));
                transform.position = Vector3.SmoothDamp(transform.position, targetPosition, ref velocity, smoothTime);
                //transform.localEulerAngles = new Vector3(0, 180, 0);
                transform.LookAt(Camera.main.transform);
            }
        }
        else
        {
            transform.LookAt(Camera.main.transform);
        }
        
        
    }
}
