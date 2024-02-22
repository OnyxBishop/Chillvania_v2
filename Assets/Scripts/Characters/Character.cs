using System;
using UnityEngine;
using PlayerPrefs = Agava.YandexGames.Utility.PlayerPrefs;

[RequireComponent(typeof(Movement))]
public class Character : MonoBehaviour, ICharacter
{
    private const string SaveKey = "Money";

    private InventoryView _inventoryView;
    private int _money;

    public IMovable IMovable { get; private set; }
    public Inventory Inventory { get; private set; }
    public Interaction Interaction { get; private set; }
    public BoostItemView BoostView { get; private set; }
    public int Money => _money;
    public NpcType Type => NpcType.Ally;

    public event Action<int> MoneyChanged;

    public void Awake()
    {
        IMovable = GetComponent<Movement>();
        _inventoryView = GetComponentInChildren<InventoryView>(includeInactive: true);
        Interaction = GetComponentInChildren<Interaction>();
        BoostView = GetComponentInChildren<BoostItemView>();

        _money = PlayerPrefs.GetInt(SaveKey, 0);
    }

    public void Upgrade(IUpgradeable upgradeable, float value)
    {
        upgradeable.Upgrade(value);
    }

    public void EnableMovement()
    {
        IMovable.Enable();
    }

    public void DisableMovement()
    {
        IMovable.Disable();
    }

    public void SetConfiguration(StatsConfig statsConfig)
    {
        PlayerConfig config = statsConfig.Player;

        Inventory = new Inventory(config.InventoryCount);
        Interaction.Init(config.Strenght, Inventory);
        _inventoryView.Init(Inventory);
        IMovable.Init(config.Speed);
    }

    public void AddMoney(int money)
    {
        _money += money;
        PlayerPrefs.SetInt(SaveKey, _money);
        PlayerPrefs.Save();
        MoneyChanged?.Invoke(_money);
    }

    public void SpendMoney()
    {
        _money -= _money;
        PlayerPrefs.SetInt(SaveKey, _money);
        PlayerPrefs.Save();
        MoneyChanged?.Invoke(_money);
    }
}
