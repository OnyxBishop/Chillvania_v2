public class SelectedSkinChecker : IShopItemVisitor
{
    private IPersistantData _data;

    public bool IsSelected { get; private set; }

    public SelectedSkinChecker(IPersistantData data)
    {
        _data = data;
    }

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