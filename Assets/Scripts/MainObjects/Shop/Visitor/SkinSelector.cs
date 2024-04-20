using Ram.Chillvania.Boot;

namespace Ram.Chillvania.Shop.Visitors
{
    public class SkinSelector : IShopItemVisitor
    {
        private IPersistantData _data;

        public SkinSelector(IPersistantData data) => _data = data;

        public void Visit(ShopItem item)
        {
            item.Accept(this);
        }

        public void Visit(CharacterStatsItem item)
        {
        }

        public void Visit(EquippableItem item)
        {
            _data.PlayerData.SelectedSkin = item.SkinsType;
        }
    }
}