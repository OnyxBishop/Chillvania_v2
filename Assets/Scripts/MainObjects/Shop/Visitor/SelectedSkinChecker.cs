using Ram.Chillvania.Boot;
using Ram.Chillvania.Shop.ScriptableObjects;

namespace Ram.Chillvania.Shop.Visitors
{
    public class SelectedSkinChecker : IShopItemVisitor
    {
        private IPersistentData _data;

        public SelectedSkinChecker(IPersistentData data)
        {
            _data = data;
        }

        public bool IsSelected { get; private set; }

        public void Visit(ShopItem item)
        {
            item.Accept(this);
        }

        public void Visit(CharacterStatsItem item)
        {
        }

        public void Visit(EquippableItem item)
        {
            IsSelected = _data.PlayerData.SelectedSkin == item.SkinsType;
        }
    }
}