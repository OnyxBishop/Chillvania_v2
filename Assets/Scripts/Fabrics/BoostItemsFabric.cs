using Ram.Chillvania.Items.BoostItems;
using UnityEngine;

public class BoostItemsFabric : MonoBehaviour
{
    [SerializeField] private Bomb _bombPrefab;
    [SerializeField] private Skates _skatesPrefab;

    public BoostItem Create(BoostItemType type, Transform point)
    {
        BoostItem item = null;

        if (type == BoostItemType.Bomb)
            item = Instantiate(_bombPrefab, point.position, Quaternion.identity, point);

        if (type == BoostItemType.Skates)
            item = Instantiate(_skatesPrefab, point.position, Quaternion.identity, point);

        return item;
    }
}