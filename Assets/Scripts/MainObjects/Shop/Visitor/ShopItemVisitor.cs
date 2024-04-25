using Ram.Chillvania.Shop.ScriptableObjects;
using Ram.Chillvania.UI.Shop;

namespace Ram.Chillvania.Shop.Visitors
{
    public class ShopItemVisitor : IShopItemVisitor
    {
        private ShopItemView _skinPrefab;
        private ShopItemView _statsPrefab;

        public ShopItemVisitor(ShopItemView skinPrefab, ShopItemView statsPrefab)
        {
            _skinPrefab = skinPrefab;
            _statsPrefab = statsPrefab;
        }

        public ShopItemView Prefab { get; private set; }

        public void Visit(ShopItem item)
        {
            item.Accept(this);
        }

        public void Visit(EquippableItem item)
        {
            Prefab = _skinPrefab;
        }

        public void Visit(CharacterStatsItem item)
        {
            Prefab = _statsPrefab;
        }
    }
}