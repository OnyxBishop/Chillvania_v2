public class OpenItemsChecker : IShopItemVisitor
{
    private IPersistantData _data;

    public OpenItemsChecker(IPersistantData data)
    {
        _data = data;
    }

    public bool IsOpened { get; private set; }

    public void Visit(ShopItem item)
    {
        item.Accept(this);
    }

    public void Visit(EquippableItem item)
    {
        IsOpened = _data.PlayerData.OpenedSkins.Contains(item.SkinsType);
    }

    public void Visit(CharacterStatsItem item)
    {
        IsOpened = !_data.PlayerData.CanIncrease(item.StatsType, item.IncreseValue);
    }
}