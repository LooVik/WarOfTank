using System.Collections;
using System.Collections.Generic;
using System;
using UnityEngine;

public class MapboxCollisionManager : MonoBehaviour
{
		[SerializeField] private string targetTag = "EnemyProjectile";
		[SerializeField] private string buildingTag = "Building";
		[SerializeField] private string poiTag = "POI";

		private void OnCollisionEnter(Collision other)
		{
			if(other.gameObject.CompareTag(targetTag))
			{
				PaintBuilding(other.gameObject);
				HandleDamage();
			}
		}

		private void OnTriggerEnter(Collider other)
		{
			if(other.CompareTag(targetTag))
			{
				PaintBuilding(other.gameObject);
				HandleDamage();
			}
		}

		private void HandleDamage()
		{
			if(gameObject.CompareTag(buildingTag))
			{
				GameManager.Instance.BuildingHit();
			}
			else if (gameObject.CompareTag(poiTag))
			{
				GameManager.Instance.PoiHit();
			}
		}

		private void PaintBuilding(GameObject other)
		{
			try
			{
				Renderer paintRenderer = other.GetComponent<Renderer>();
				Color color = paintRenderer.material.color;
				Renderer renderer = GetComponent<Renderer>();
				foreach(Material material in renderer.materials)
				{
					material.shader = Shader.Find("_Color");
					material.SetColor("_Color", color);
					material.shader = Shader.Find("Specular");
					material.SetColor("_SpecColor", color);
				}
			}
			catch (Exception e)
			{
				print(e);
			}
		}

}
