using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

public class TriggerDestruction : MonoBehaviour
{
	[SerializeField] private string[] targetTags;

	private void OnTriggerExit(Collider other)
	{
		if(targetTags.Contains(other.tag))
		{
			Destroy(gameObject);
		}
	}

}
