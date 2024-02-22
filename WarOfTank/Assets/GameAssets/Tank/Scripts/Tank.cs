using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Tank : MonoBehaviour
{
	[SerializeField] private GameObject projectile;
    [SerializeField] private GameObject spawnPlaceHolder;
    [SerializeField] private Vector3 rotationAxis;
    [SerializeField] private float fireRate = 5.0f;
    [SerializeField] private float ForceShot = 1500.0f;
    [SerializeField] private float moveSpeed = 0.2f;
    [SerializeField] private float travelTime = 1.0f;
    [SerializeField] private float killHeight = -10.0f;

    void Start()
    {
        StartCoroutine(fireProjectile());
        StartCoroutine(Move());
    }

    void Update()
    {
        if(transform.position.y <= killHeight)
        {
            Destroy(gameObject);
        }
    }

    private void onTriggerEnter(Collider other)
    {
        if(other.CompareTag("Projectile"))
        {
            StartCoroutine(DestroySelf());
        }
    }

    private IEnumerator fireProjectile()
    {
        yield return new WaitForSeconds(fireRate);

        while(true)
        {
            GameObject bullet = Instantiate(projectile, spawnPlaceHolder.transform.position, spawnPlaceHolder.transform.rotation);
            bullet.GetComponent<Rigidbody>().velocity = (bullet.transform.up * -1 * ForceShot);
            Destroy(bullet, 8.0f);
            yield return new WaitForSeconds(fireRate);
        }
    }

    private IEnumerator DestroySelf()
    {
        yield return new WaitForSeconds(1);
        Destroy(gameObject);
    }

    private IEnumerator Move()
    {
        float time = 0f;
        while(time < travelTime)
        {
            time += Time.deltaTime;
            transform.Translate(transform.forward * -1 * moveSpeed * Time.deltaTime);
            yield return null;
        }
        transform.Rotate(rotationAxis, Random.Range(0, 360));
        StartCoroutine(Move());
    }

    

}
