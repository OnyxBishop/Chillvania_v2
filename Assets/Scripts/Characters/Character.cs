using UnityEngine;

[RequireComponent(typeof(Rigidbody))]
[RequireComponent(typeof(Movement))]
[RequireComponent(typeof(InputSetter))]
public class Character : MonoBehaviour, ICharacter
{
    private InventoryView _inventoryView;
    private InputSetter _inputSetter;

    public IMovable IMovable { get; private set; }
    public Inventory Inventory { get; private set; }
    public Interaction Interaction { get; private set; }
    public BoostItemView BoostView { get; private set; }
    public NpcType Type => NpcType.Ally;

    public void Awake()
    {
        IMovable = GetComponent<Movement>();
        _inputSetter = GetComponent<InputSetter>();
        _inventoryView = GetComponentInChildren<InventoryView>(includeInactive: true);
        Interaction = GetComponentInChildren<Interaction>();
        BoostView = GetComponentInChildren<BoostItemView>();
    }

    public void Upgrade(IUpgradeable upgradeable, float value)
    {
        upgradeable.Upgrade(value);
    }

    public void EnableMovement()
    {
        IMovable.Enable();
        _inputSetter.Enable();
    }

    public void DisableMovement()
    {
        IMovable.Disable();
        _inputSetter.Disable();
    }

    public void SetConfiguration(StatsConfig statsConfig)
    {
        PlayerConfig config = statsConfig.Player;

        Inventory = new Inventory(config.InventoryCount);
        Interaction.Init(config.Strenght, Inventory);
        _inventoryView.Init(Inventory);
        IMovable.Init(config.Speed);
        _inputSetter.Set(this);
    }
}
