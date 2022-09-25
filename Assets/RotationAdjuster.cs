using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RotationAdjuster : MonoBehaviour
{
    public GameObject audioPlayer;
    // Start is called before the first frame update
    void Start()
    {
        audioPlayer = GameObject.Find("AudioPlayer");
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
