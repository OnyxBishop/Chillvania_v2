public class ItemUnlocker : IShopItemVisitor
{
    private IPersistantData _data;

    public ItemUnlocker(IPersistantData data) =>
        _data = data;

    public void Visit(ShopItem item)
    {
        item.Accept(this);
    }

    public void Visit(CharacterStatsItem item)
    {
        _data.PlayerData.IncreaseStats(item.StatsType, item.IncreseValue);
    }

    public void Visit(EquippableItem item)
    {
        _data.PlayerData.OpenSkin(item.SkinsType);
    }
}
