using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RotationAdjuster : MonoBehaviour
{

    public GameObject facer;
    public AudioPlayer audioPlayer;
    // Start is called before the first frame update
    public AudioClip clip;

    public GameObject activeScene;

    public List<GameObject> scenes;

    public GameObject placementMesh;

    public float rotOffset = 0.0f;

    public float rot = 0.0f;
    public int sceneSelected = -1;
    public float rotAdded = 0;

    //private void OnTriggerEnter(Collider other)
    //{
    //    if (other.CompareTag("AudioZone"))
    //    {
    //        SwitchScene(other.GetComponent<RoomController>().scene.gameObject);

    //        //activeScene = other.gameObject;
    //    }

    //}

    //private void OnTriggerExit(Collider other)
    //{
    //    if (other.CompareTag("AudioZone") )
    //    {
    //        //other.GetComponent<RoomController>().scene.SetActive(false);
    //        //activeScene.GetComponent<RoomController>().scene.SetActive(false);
    //       // activeScene = null;
    //        TurnOffScenes();
    //    }

    //}
    private void OnEnable()
    {
        audioPlayer = GameObject.Find("AudioPlayer").GetComponent<AudioPlayer>();
        audioPlayer.placementMesh = placementMesh;
        audioPlayer.placementMesh = placementMesh;

    }
    public void Update()
    {
        facer.transform.LookAt(Camera.main.transform.position);
         rot = facer.transform.eulerAngles.y - rotAdded;
        if (rot > 0 && rot < 120)
        {
            if(sceneSelected != 0) SetScene(0);

        }
        if (rot > 120 && rot < 240)
        {
            if (sceneSelected != 1) SetScene(1);
        }
        if (rot > 240 && rot < 360)
        {
            if (sceneSelected != 2) SetScene(2);
        }
    }

    public void SetScene(int i)
    {
        TurnOffScenes();
        scenes[i].SetActive(true);
        sceneSelected = i;

    }
    public void AdjustRotOffset()
    {
        //rotOffset += 10.0f;
        transform.eulerAngles += new Vector3(0, 10.0f, 0);

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
