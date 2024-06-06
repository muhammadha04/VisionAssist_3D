using System;
using System.Collections;
using System.IO;
using UnityEngine;
// Ensure you have the correct namespaces for Mixed Reality Toolkit
using Microsoft.MixedReality.Toolkit.Input;
using Microsoft.MixedReality.Toolkit;
using Microsoft.MixedReality.Toolkit.Utilities;

using static System.Net.Mime.MediaTypeNames;
//using System.Diagnostics;
using Microsoft.MixedReality.Toolkit.UI;
//using System.Diagnostics;

public class Experiment_Logger : MonoBehaviour
{
    public GameObject Camera; // Attach camera
    private float startTime;
    private string filePath; // File path to save data
    private string fileName; // File name to save data
    public bool loggingInProcess = false; // True while logging in process
    public GameObject gameObjectPrefab; // Prefab to instantiate
    private string testSubjectName = string.Empty;
    private bool isNameInputInProgress = false;

    public AudioSource beepSource; // Audio source for beep sound
    public AudioSource BeginName;
    public AudioSource EndName;
    public AudioSource startLogging;
    public AudioSource finishLogging;

    void Start()
    {
        if (CoreServices.InputSystem == null)
        {
            Debug.Log("Input System is not initialized.");
        }
        else if (CoreServices.InputSystem.EyeGazeProvider == null)
        {
            Debug.Log("EyeGazeProvider is not available in the Input System.");
        }
        else
        {
            Debug.Log("No Problems.");
        }
    }

    private IEnumerator LogDataRoutine()
    {
        while (loggingInProcess)
        {
            LogData(); // Call your existing logging method
            yield return new WaitForSeconds(0.1f); // Wait for 0.33 seconds
        }
    }
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.UpArrow))
        {
            //play enter details
            
            if (!loggingInProcess)
            {
                if (!isNameInputInProgress)
                {
                    BeginName.Play();
                    isNameInputInProgress = true;
                    testSubjectName = "";
                    Debug.Log("Please enter the test subject's name (press '/' to finish):");
                }
            }
            
        }


        //if 'P' is pressed, stop logging
        if (Input.GetKeyDown(KeyCode.P) && loggingInProcess)
        {
            EndLogging();
        }

        if (isNameInputInProgress)
        {
            
            //if ARROW DOWN IS CLICKED
            if (Input.GetKeyDown(KeyCode.DownArrow)) {
                
                isNameInputInProgress = false;
                if (string.IsNullOrEmpty(testSubjectName))
                {
                    Debug.Log("No test subject name entered. Logging will not start.");
                }
                else
                {
                    Debug.Log("Logging started for test subject: " + testSubjectName);
                    //play starte sound
                    startLogging.Play();
                    BeginLogging();
                }
            }
            else
            {
                
                char inputChar = GetInputChar();
                if (inputChar != '\0')
                {
                    testSubjectName += inputChar;
                    Debug.Log("Current test subject name: " + testSubjectName);
                }
            }
        }
    }
    private char GetInputChar()
    {
        foreach (char c in Input.inputString)
        {
            if (c != '\0')
            {
                return c;
            }
        }
        return '\0';
    }
    //initiate frame counter

    private Vector3 TransformPositionToInitialReferenceFrame(Vector3 currentPosition)
    {
        // Convert the current position into the initial reference frame
        return Quaternion.Inverse(initialRotation) * (currentPosition - initialPosition);
    }
    private void LogData()
    {
       


        if (!loggingInProcess) return;

        //Vector3 tempPos = Camera.transform.position;
        Vector3 tempPos = TransformPositionToInitialReferenceFrame(Camera.transform.position);

        Vector3 tempRot = Camera.transform.rotation.eulerAngles;
        float tempTime = Time.time - startTime;
   



        // Write variables to log
        using (TextWriter writer = File.AppendText(filePath))
        {
            float defaultDistanceInMeters = 2.0f; // Example distance
            double distance = 0.0;
            if (gameObjectPrefab != null)
            {
               // Debug.Log("inside not null "+gameObjectPrefab.name);


                //rescale prefab to 0.01%
                gameObjectPrefab.transform.localScale = new Vector3(0.01f, 0.01f, 0.01f);

                RaycastHit hitInfo;
                if (Physics.Raycast(CoreServices.InputSystem.EyeGazeProvider.GazeOrigin,
                    CoreServices.InputSystem.EyeGazeProvider.GazeDirection, out hitInfo))
                {
                    //Debug.Log($"Hit at position {hitInfo.point}; Distance from camera {distance};");

                    //if hitInfo.collider.gameObject.name has Model or mesh with or without caps, log the hit point and distance

                    //GameObject gameObjectInstance = Instantiate(gameObjectPrefab, hitInfo.point, Quaternion.LookRotation(hitInfo.normal));
                    distance = Vector3.Distance(Camera.transform.position, hitInfo.point);


                    //Debug.Log($" {hitInfo.collider.gameObject.name} Hit at position {hitInfo.point}; Distance from camera {distance};");
                        writer.WriteLine($"{tempTime}, {tempPos.x}, {tempPos.y}, {tempPos.z}, {tempRot.x}, {tempRot.y}, {tempRot.z}, {hitInfo.collider.gameObject.name}, {hitInfo.point}, {distance}");
                    
                        
                }
            }   
            else
            {
                Debug.LogError("Prefab not found in Resources.");
            }
            //Debug.Log($"Position {tempPos.x}; {tempPos.y}; {tempPos.z}");

        }
    }

    //declare initial position and rotation
    private Vector3 initialPosition;
    private Quaternion initialRotation;

    private void BeginLogging()
    {
        if (!loggingInProcess)
        {
            loggingInProcess = true;
            startTime = Time.time;
            string timeStamp = testSubjectName.ToString() + "_" + DateTime.Now.ToString("yyyy-MM-dd_hh-mm-ss-tt");
            initialPosition = Camera.transform.position;
            initialRotation = Camera.transform.rotation;

            fileName = $"{timeStamp}.txt";

            //make sure filepath is correct and there are no name errors
            for(int i = 0; i < testSubjectName.Length; i++)
            {


                //if not a number of a letter, replace with 'X'
                if (!char.IsLetterOrDigit(fileName[i]))
                {
                    Debug.Log("Invalid character in file path: " + fileName[i] + " at index: " + i);

                    fileName = fileName.Remove(i, 1).Insert(i, "X");
                }
            }
            filePath = Path.Combine(UnityEngine.Application.persistentDataPath, fileName);


            StartCoroutine(LogDataRoutine());
            if (startLogging != null)
            {
                //play start sound
                startLogging.Play();
            }
        }
    }
    void OnApplicationQuit()
    {
        EndLogging();
    }

    public void EndLogging()
    {



        if (loggingInProcess)
        {
            loggingInProcess = false;
            StopCoroutine(LogDataRoutine());
            if (beepSource != null)
            {
                //play end sound
                finishLogging.Play();
            }
        }
    }
}
