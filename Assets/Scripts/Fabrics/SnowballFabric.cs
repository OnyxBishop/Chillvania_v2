using Ram.Chillvania.Items;
using UnityEngine;

public class SnowballFabric : MonoBehaviour
{
    [SerializeField] private Snowball _prefab;

    public Snowball Create(Transform transform)
    {
        Snowball snowball = Instantiate(_prefab, transform.position, Quaternion.identity);
        snowball.transform.parent = transform;

        return snowball;
    }
}