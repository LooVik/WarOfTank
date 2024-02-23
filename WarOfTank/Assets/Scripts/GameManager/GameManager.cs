using System.Collections;
using System.Collections.Generic;
using UnityEngine.XR.iOS;
using UnityEngine;

public class GameManager : MonoBehaviour
{
	[SerializeField] private int tankDmgScore = 0;
	[SerializeField] private int buildingDmgCost = 5;
	[SerializeField] private int poiDmgCost = 25;
	[SerializeField] private bool gameStarted = false;
	[SerializeField] private bool gameRunning = false;
	[SerializeField] private int score = 0;
	
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
		score += tankDmgScore;
	}

	public void PoiHit()
	{
		SubtractFromScore(poiDmgCost);
	}

	public void BuildingHit()
	{
		SubtractFromScore(buildingDmgCost);
	}

	private void SubtractFromScore(int amount)
	{
		score = Mathf.Max(0, score - amount);
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
