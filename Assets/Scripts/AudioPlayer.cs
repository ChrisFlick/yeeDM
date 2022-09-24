using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AudioPlayer : MonoBehaviour
{
    public AudioClip clip;

    public GameObject activeScene;

    public List<GameObject> scenes;

    public GameObject placementMesh;

    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("AudioZone"))
        {
            SwitchScene(other.GetComponent<RoomController>().scene.gameObject);
           
            //activeScene = other.gameObject;
        }
      
    }

    private void OnTriggerExit(Collider other)
    {
        if (other.CompareTag("AudioZone") )
        {
            //other.GetComponent<RoomController>().scene.SetActive(false);
            //activeScene.GetComponent<RoomController>().scene.SetActive(false);
           // activeScene = null;
            TurnOffScenes();
        }
      
    }


    // Start is called before the first frame update
    void Start()
    {
        TurnOffScenes();
    }

    public void TurnOffScenes()
    {
        for (int i = 0; i < scenes.Count; i++)
        {
            scenes[i].SetActive(false);
        }
    }


    public void SwitchScene(GameObject scene)
    {
        
            for (int i = 0; i < scenes.Count; i++)
            {
                scenes[i].SetActive(false);
            }
            scene.SetActive(true);
            //activeScene = scene;
        
    }

    public void TurnOffMesh()
    {
        if (placementMesh)
        {
            placementMesh.SetActive(false);
        }
    }
    
   
}
