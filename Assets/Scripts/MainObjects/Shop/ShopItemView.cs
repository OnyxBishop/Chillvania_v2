using System;
using UnityEngine;
using UnityEngine.UI;

public class ShopItemView : MonoBehaviour
{
    [SerializeField] private Image _contentImage;
    [SerializeField] private Image _lockImage;
    [SerializeField] private Image _selectionImage;

    [SerializeField] private Button _buyButton;

    public bool IsLock { get; private set; }
    public ShopItem ShopItem { get; private set; }

    public GameObject Model { get; private set; } = null;

    public int Price => ShopItem.Cost;

    public event Action<ShopItemView> Clicked;

    private void OnEnable() =>
        _buyButton.onClick.AddListener(OnButtonClicked);

    private void OnDisable() =>
        _buyButton.onClick.RemoveListener(OnButtonClicked);

    public void Init(ShopItem item)
    {
        ShopItem = item;

        if (item is EquippableItem skin)
            Model = skin.Model;

        _contentImage.sprite = item.Sprite;
    }

    public void Lock()
    {
        IsLock = true;
        _lockImage.gameObject.SetActive(IsLock);
    }

    public void Unlock()
    {
        IsLock = false;
        _lockImage.gameObject.SetActive(IsLock);
    }

    public void Select() => _selectionImage.gameObject.SetActive(true);

    public void Unselect() => _selectionImage.gameObject.SetActive(false);

    private void OnButtonClicked()
    {
        Clicked?.Invoke(this);
    }
}
