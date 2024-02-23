using System.Collections;
using System.Collections.Generic;
using UnityEngine.Assertions;
using UnityEngine;

public class TankFactory : MonoBehaviour
{
	[SerializeField] private float spawnRate = 1.0f;
	[SerializeField] private float spawnRadius = 0.6f;
	[SerializeField] private float spawnHeight = 10.0f;
	[SerializeField] private GameObject spawnObject;

	private void Awake()
	{
		Assert.IsNotNull(spawnObject);

	}

	// Use this for initialization
	void Start()
	{
		StartCoroutine(SpawnEnemy());
	}

	private IEnumerator SpawnEnemy()
	{
		yield return new WaitForSeconds(spawnRate);
		while(true)
		{
			if(GameManager.Instance.GameRunning)
			{
				Instantiate(spawnObject, GetRandomPosition(), spawnObject.transform.rotation);
			}
			yield return new WaitForSeconds(spawnRate);
		}
	}

	private Vector3 GetRandomPosition()
	{
		Vector3 randomPos = Random.insideUnitSphere * spawnRadius + transform.position;
		Vector3 newPos = new Vector3(randomPos.x, transform.position.y + spawnHeight, randomPos.z);
		return newPos;
	}

}
