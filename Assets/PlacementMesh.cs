using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlacementMesh : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        GameObject.Find("AudioPlayer").GetComponent<AudioPlayer>().placementMesh = this.gameObject;
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
