using Ram.Chillvania.Boot;
using Ram.Chillvania.Shop.ScriptableObjects;

namespace Ram.Chillvania.Shop.Visitors
{
    public class SkinSelector : IShopItemVisitor
    {
        private IPersistentData _data;

        public SkinSelector(IPersistentData data) => _data = data;

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