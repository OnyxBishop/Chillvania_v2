using Ram.Chillvania.Shop.ScriptableObjects;
using Ram.Chillvania.Shop.Visitors;
using Ram.Chillvania.UI.Shop;
using UnityEngine;

namespace Ram.Chillvania.Fabrics
{
    public class ShopItemViewFabric : MonoBehaviour
    {
        [SerializeField] private ShopItemView _skinViewPrefab;
        [SerializeField] private ShopItemView _statsViewPrefab;

        public ShopItemView Create(ShopItem data, Transform parent)
        {
            ShopItemVisitor shopItemVisitor = new ShopItemVisitor(_skinViewPrefab, _statsViewPrefab);
            shopItemVisitor.Visit(data);

            ShopItemView created = Instantiate(shopItemVisitor.Prefab, parent);
            created.Init(data);

            return created;
        }
    }
}