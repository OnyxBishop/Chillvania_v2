using UnityEngine;

public abstract class ShopItem : ScriptableObject
{
    [SerializeField] private Sprite _sprite;
    [SerializeField] private int _cost;

    public Sprite Sprite => _sprite;
    public int Cost => _cost;

    public abstract void Accept(IShopItemVisitor visitor);
}
