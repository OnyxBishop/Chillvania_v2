using UnityEngine;

[CreateAssetMenu(fileName = "EquippableItemData", menuName = "ShopItem/EquippableItem", order = 51)]
public class EquippableItem : ShopItem
{
    [SerializeField] private GameObject _model;
    [SerializeField] private SkinsType _type;

    public GameObject Model => _model;
    public SkinsType SkinsType => _type;

    public override void Accept(IShopItemVisitor visitor)
    {
        visitor.Visit(this);
    }
}