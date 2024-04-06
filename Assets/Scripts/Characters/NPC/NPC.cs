using UnityEngine;
public class NPC : MonoBehaviour, ICharacter
{
    private TeamAura _teamAura;

    public IMovable IMovable { get; private set; }
    public NpcType Type { get; private set; }
    public Inventory Inventory { get; private set; }
    public BoostItemView BoostView { get; private set; }
    public Interaction Interaction { get; private set; }

    public bool HasBoost => BoostView.Item != null;

    private void Awake()
    {
        IMovable = GetComponent<NPCMovement>();
        Interaction = GetComponentInChildren<Interaction>();
        BoostView = GetComponentInChildren<BoostItemView>();
        _teamAura = GetComponentInChildren<TeamAura>();
    }

    public void Upgrade(IUpgradeable upgradeable, float value)
    {
        if (upgradeable is Inventory)
            Inventory.Upgrade(value);
        if (upgradeable is Interaction)
            Interaction.Upgrade(value);
    }

    public void SetType(NpcType type)
    {
        Type = type;
    }

    public void SetAuraColor(NpcType type)
    {
        _teamAura.SetColor(type);
    }

    public void SetConfiguration(StatsConfig statsConfig)
    {
        BotConfig config = statsConfig.NewBot;

        Inventory = new Inventory(config.InventoryCount);
        Interaction.Init(config.Strenght, Inventory);
        IMovable.Init(config.Speed);
    }
}