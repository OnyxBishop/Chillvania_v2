using Ram.Chillvania.Boot;
using Ram.Chillvania.Shop.Visitors;
using Ram.Chillvania.UI.Shop;
using UnityEngine;

namespace Ram.Chillvania.Shop
{
    public class ShopBootstrap : MonoBehaviour
    {
        [SerializeField] private Shop _shop;
        [SerializeField] private ShopStatsView _shopStatsView;

        private JsonSaver _saver;
        private IPersistentData _persistentData;

        public bool IsInit { get; private set; } = false;

        public void Init()
        {
            InitData();

            InitShop();

            IsInit = true;
        }

        private void InitData()
        {
            _persistentData = new PersistentData();
            _saver = new JsonSaver(_persistentData);
            _saver.Load();
        }

        private void InitShop()
        {
            OpenItemsChecker openSkinsChecker = new OpenItemsChecker(_persistentData);
            SelectedSkinChecker selectedSkinChecker = new SelectedSkinChecker(_persistentData);
            SkinSelector skinSelector = new SkinSelector(_persistentData);
            ItemUnlocker skinUnlocker = new ItemUnlocker(_persistentData);

            _shop.Init(_saver, skinSelector, skinUnlocker, openSkinsChecker, selectedSkinChecker);
            _shopStatsView.Init(_persistentData.PlayerData);
        }
    }
}