public interface IShopItemVisitor
{
    public void Visit(ShopItem item);
    public void Visit(CharacterStatsItem item);
    public void Visit(EquippableItem item);
}
