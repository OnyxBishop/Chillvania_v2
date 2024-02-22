using UnityEngine;


public class ShopItem
{
    private Sprite _icon;
    private int _cost;

    public ShopItem(Sprite icon, int cost)
    {
        _icon = icon;
        _cost = cost;
    }
}
