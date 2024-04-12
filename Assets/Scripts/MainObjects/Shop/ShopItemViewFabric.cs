using UnityEngine;

public class ShopItemViewFabric : MonoBehaviour
{
    [SerializeField] private ShopItemView _skinViewPrefab;
    [SerializeField] private ShopItemView _statsViewPrefab;

    public ShopItemView Create(ShopItem data, Transform parent)
    {
        ShopItemVisitor shopItemVisitor = new (_skinViewPrefab, _statsViewPrefab);
        shopItemVisitor.Visit(data);

        ShopItemView created = Instantiate(shopItemVisitor.Prefab, parent);
        created.Init(data);

        return created;
    }
}