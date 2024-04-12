using System;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

public class ShopView : MonoBehaviour
{
    [SerializeField] private ShopItemViewFabric _fabric;
    [SerializeField] private RectTransform _container;

    private List<ShopItemView> _shopItemViews = new List<ShopItemView>();

    private OpenItemsChecker _openSkinsChecker;
    private SelectedSkinChecker _selectedSkinChecker;

    public event Action<ShopItemView> ItemViewClicked;

    public void Init(OpenItemsChecker openSkinsChecker, SelectedSkinChecker selectedSkinChecker)
    {
        _openSkinsChecker = openSkinsChecker;
        _selectedSkinChecker = selectedSkinChecker;
    }

    public void CreateItemView(IReadOnlyList<ShopItem> items)
    {
        Clear();

        for (int i = 0; i < items.Count; i++)
        {
            ShopItemView view = _fabric.Create(items[i], _container);
            view.Clicked += OnShopItemClicked;

            _openSkinsChecker.Visit(view.ShopItem);

            if (_openSkinsChecker.IsOpened)
            {
                _selectedSkinChecker.Visit(view.ShopItem);

                if (_selectedSkinChecker.IsSelected)
                {
                    view.Select();
                    ItemViewClicked?.Invoke(view);
                }

                view.Unlock();
            }
            else
            {
                view.Lock();
            }

            _shopItemViews.Add(view);
        }

        Sort();
    }

    public void Select(ShopItemView view)
    {
        for (int i = 0; i < _shopItemViews.Count; i++)
            _shopItemViews[i].Unselect();

        view.Select();
    }

    private void OnShopItemClicked(ShopItemView view)
    {
        ItemViewClicked?.Invoke(view);
    }

    private void Sort()
    {
        _shopItemViews = _shopItemViews
            .OrderBy(view => view.IsLock)
            .ThenBy(view => view.Price)
            .ToList();

        for (int i = 0; i < _shopItemViews.Count; i++)
        {
            _shopItemViews[i].transform.SetSiblingIndex(i);
        }
    }

    private void Clear()
    {
        for (int i = 0; i < _shopItemViews.Count; i++)
        {
            _shopItemViews[i].Clicked -= OnShopItemClicked;
            Destroy(_shopItemViews[i].gameObject);
        }

        _shopItemViews.Clear();
    }
}