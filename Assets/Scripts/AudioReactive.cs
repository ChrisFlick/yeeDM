using System.Collections;
using System.Collections.Generic;
using UnityEngine;

//[RequireComponent(typeof(AudioSource))]
public class AudioReactive : MonoBehaviour
{
    public float loudness;
    public float multiplier = 2.0f;

    public int sampleWindow = 64;
    public bool useMic = true;

    public AudioClip microphoneClip;
    void Start()
    {
        if (useMic)
        {
            MicToAudioClip();
        }
 
    }
    public void MicToAudioClip()
    {
       // string microphoneName = Microphone.devices[0];
      //  microphoneClip = Microphone.Start(microphoneName, true, 20, AudioSettings.outputSampleRate);
    }

    public float GetAudioClipLoudness(int clipPosition, AudioClip clip)
    {
        int startPosition = clipPosition - sampleWindow;

        if(startPosition < 0)
        {
            return 0;
        }
        float[] waveData = new float[sampleWindow];
        clip.GetData(waveData, startPosition);

        float totalLoundnesss = 0;
        for (int i = 0; i < sampleWindow; i++)
        {
            totalLoundnesss += Mathf.Abs(waveData[i]);
        }
        return totalLoundnesss / sampleWindow;
    }

  //  public float GetLoudnessFromMic()
  //  {
      //  return GetAudioClipLoudness(Microphone.GetPosition(Microphone.devices[0]), microphoneClip);
   // }

    // Update is called once per frame
    void Update()
    {
        //loudness = 1.0f + (GetLoudnessFromMic()*multiplier);
       // transform.localScale = new Vector3(loudness, loudness, loudness);
        //float[] spectrum = new float[256];

        //AudioListener.GetSpectrumData(spectrum, 0, FFTWindow.Rectangular);

        //for (int i = 1; i < spectrum.Length - 1; i++)
        //{
        //    Debug.DrawLine(new Vector3(i - 1, spectrum[i] + 10, 0), new Vector3(i, spectrum[i + 1] + 10, 0), Color.red);
        //    Debug.DrawLine(new Vector3(i - 1, Mathf.Log(spectrum[i - 1]) + 10, 2), new Vector3(i, Mathf.Log(spectrum[i]) + 10, 2), Color.cyan);
        //    Debug.DrawLine(new Vector3(Mathf.Log(i - 1), spectrum[i - 1] - 10, 1), new Vector3(Mathf.Log(i), spectrum[i] - 10, 1), Color.green);
        //    Debug.DrawLine(new Vector3(Mathf.Log(i - 1), Mathf.Log(spectrum[i - 1]), 3), new Vector3(Mathf.Log(i), Mathf.Log(spectrum[i]), 3), Color.blue);
        //}
    }
}
