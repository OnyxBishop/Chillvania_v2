using UnityEngine;

[CreateAssetMenu(fileName = "ItemData", menuName = "ShopItem/item", order = 51)]
public class ShopItemData : ScriptableObject
{
    [SerializeField] private Sprite _icon;
    [SerializeField] private int _cost;

    public Sprite Icon => _icon;
    public int Cost => _cost;
}
