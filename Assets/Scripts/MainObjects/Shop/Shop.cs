using System;
using System.Collections.Generic;
using UnityEngine;

public class Shop
{
    [SerializeField] private List<ShopItemData> _itemsData;

    private List<ShopItem> _items;
    private int _itemCardCount = 3;

    public event Action<IReadOnlyList<ShopItem>> ItemsCreated;

    public void BuyItem(Character character)
    {
        
    }

    private void CreateItems()
    {
        _items = new List<ShopItem>(_itemCardCount);

        for (int i = 0; i < _items.Count; i++)
            _items.Add(new ShopItem(_itemsData[i].Icon, _itemsData[i].Cost));

        ItemsCreated?.Invoke(_items);
    }
}
