using Ram.Chillvania.Shop.ScriptableObjects;

namespace Ram.Chillvania.Shop.Visitors
{
    public interface IShopItemVisitor
    {
        public void Visit(ShopItem item);
        public void Visit(CharacterStatsItem item);
        public void Visit(EquippableItem item);
    }
}