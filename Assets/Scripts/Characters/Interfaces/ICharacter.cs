using Ram.Chillvania.Model;

public interface ICharacter
{
    public IMovable IMovable { get; }
    public Inventory Inventory { get; }
    public Interaction Interaction { get; }
    public BoostItemView BoostView { get; }
    public NpcType Type { get; }
    public void Upgrade(IUpgradeable upgradeable, float value);
}