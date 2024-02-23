using System.Collections;
using System.Collections.Generic;
using UnityEngine.EventSystems;
using UnityEngine.Assertions;
using UnityEngine;

public class ScreenCannons : MonoBehaviour {

	[SerializeField] private GameObject projectile;
	[SerializeField] private int maxAmmo = 3;
	[SerializeField] private float reloadTime = 5.0f;
	[SerializeField] private float Forceshot = 750.0f;

	private int curretnAmmo = 0;
	private static ScreenCannons instance;

	public int MaxAmmo { get { return maxAmmo; }}
	public int CurrentAmmo { get { return curretnAmmo; }}
	public static ScreenCannons Instance { get { return instance; }}

	private void Awake()
	{
		//Making sure that throwing/shooting smtg.
		Assert.IsNotNull(projectile);
		if (instance == null)
		{
			instance = this;
		}
		else if (instance != this)
		{
			Destroy(gameObject);
		}
		DontDestroyOnLoad(gameObject);
	}

	// Use this for initialization
	void Start ()
	{
		StartCoroutine(ReloadAmmo());
	}

	// Update is called once per frame
	void Update ()
	{
		if(Input.GetMouseButtonDown(0))
		{
			ShotFire();
		}
	}

	private IEnumerator ReloadAmmo()
	{
		while (true)
		{
			if(GameManager.Instance.GameRunning)
			{
				curretnAmmo = Mathf.Min(curretnAmmo + 1, maxAmmo);
			}
			yield return new WaitForSeconds(reloadTime);
		}
	}

	private void ShotFire()
	{
		if(!GameManager.Instance.GameRunning)
		{
			return ;
		}
		if(curretnAmmo > 0 /*&& !EventSystem.current.IsPointerOverGameObject()*/)
		{
			GameObject newProjectile = Instantiate(projectile, transform.position, transform.rotation);
			Rigidbody projBody = newProjectile.GetComponent<Rigidbody>();
			projBody.AddForce(transform.forward * Forceshot);
			curretnAmmo--;
		}

	}

}
