using System.Collections;
using System.Collections.Generic;
using UnityEngine.XR.iOS;
using UnityEngine;

public class GameManager : MonoBehaviour
{
	private bool gameStarted = false;
	private bool gameRunning = false;
	private int score = 0;
	private static GameManager instance;

	public bool GameStarted { get { return gameStarted; } }
	public bool GameRunning { get { return gameRunning; } }
	public int Score { get { return score; } }
	public static GameManager Instance { get { return instance; } }

	private void Awake()
	{
		if(instance == null)
		{
			instance = this;
		}
		else if (instance != this)
		{
			Destroy(gameObject);
		}
		DontDestroyOnLoad(gameObject);
	}

	void Start()
	{
		UnityARSessionNativeInterface.ARAnchorAddedEvent += AnchorAdded;
		UnityARSessionNativeInterface.ARAnchorRemovedEvent += AnchorRemoved;
	}

	public void EnemyHit()
	{
		score++;
	}

	public void BuildingHit()
	{
		score = Mathf.Max(0, score - 5);
	}

	private void AnchorAdded(ARPlaneAnchor anchor)
	{
		gameStarted = true;
		gameRunning = true;

	}

	private void AnchorRemoved(ARPlaneAnchor anchor) 
	{
		gameRunning = false;
	}
}
