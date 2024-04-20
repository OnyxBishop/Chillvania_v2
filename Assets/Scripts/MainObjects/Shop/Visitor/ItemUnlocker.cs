using Ram.Chillvania.Boot;

namespace Ram.Chillvania.Shop.Visitors
{
    public class ItemUnlocker : IShopItemVisitor
    {
        private IPersistentData _data;

        public ItemUnlocker(IPersistentData data) =>
            _data = data;

        public void Visit(ShopItem item)
        {
            item.Accept(this);
        }

        public void Visit(CharacterStatsItem item)
        {
            _data.PlayerData.IncreaseStats(item.StatsType, item.IncreseValue);
        }

        public void Visit(EquippableItem item)
        {
            _data.PlayerData.OpenSkin(item.SkinsType);
        }
    }
}