using UnityEngine;

public class ShopBootstrap : MonoBehaviour
{
    [SerializeField] private Shop _shop;
    [SerializeField] private ShopStatsView _shopStatsView;

    private JsonSaver _saver;
    private IPersistantData _persistentData;

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
        _saver = new(_persistentData);
        _saver.Load();
    }

    private void InitShop()
    {
        OpenItemsChecker openSkinsChecker = new(_persistentData);
        SelectedSkinChecker selectedSkinChecker = new(_persistentData);
        SkinSelector skinSelector = new(_persistentData);
        ItemUnlocker skinUnlocker = new(_persistentData);

        _shop.Init(_saver, skinSelector, skinUnlocker, openSkinsChecker, selectedSkinChecker);
        _shopStatsView.Init(_persistentData.PlayerData);
    }
}