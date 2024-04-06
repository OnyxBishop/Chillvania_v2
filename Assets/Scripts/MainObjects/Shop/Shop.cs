using UnityEngine;
using UnityEngine.UI;

public class Shop : MonoBehaviour
{
    [SerializeField] private ShopView _view;
    [SerializeField] private ShopContent _content;
    [SerializeField] private Wallet _wallet;
    [SerializeField] private ShopStatsView _statsView;
    [SerializeField] private SkinPlacement _skinPlacement;

    [Header("Buttons")]
    [SerializeField] private CategoryButton _skinsButton;
    [SerializeField] private CategoryButton _statsButton;
    [SerializeField] private BuyButton _buyButton;
    [SerializeField] private Button _selectionButton;
    [SerializeField] private Image _selectedText;
    [SerializeField] private Button _addMoneyButton;

    private ShopItemView _selectedView;

    private JsonSaver _jsonSaver;

    private SkinSelector _skinSelector;
    private ItemUnlocker _skinUnlocker;
    private OpenItemsChecker _openSkinsChecker;
    private SelectedSkinChecker _selectedSkinChecker;

    private void OnEnable()
    {
        _skinsButton.Clicked += OnSkinsButtonClicked;
        _statsButton.Clicked += OnStatsButtonClicked;

        _buyButton.Clicked += OnBuyButtonClicked;
        _selectionButton.onClick.AddListener(OnSelectionButtonClicked);
        _addMoneyButton.onClick.AddListener(AddMoneyOnClick);
    }

    private void OnDisable()
    {
        _skinsButton.Clicked -= OnSkinsButtonClicked;
        _statsButton.Clicked -= OnStatsButtonClicked;

        _selectionButton.onClick.RemoveListener(OnSelectionButtonClicked);
        _buyButton.Clicked -= OnBuyButtonClicked;
        _addMoneyButton.onClick.RemoveListener(AddMoneyOnClick);
    }

    public void Init(JsonSaver saver, SkinSelector skinSelector, ItemUnlocker skinUnlocker,
    OpenItemsChecker openSkinsChecker, SelectedSkinChecker selectedSkinChecker)
    {
        _jsonSaver = saver;

        _skinSelector = skinSelector;
        _skinUnlocker = skinUnlocker;
        _openSkinsChecker = openSkinsChecker;
        _selectedSkinChecker = selectedSkinChecker;

        _view.Init(_openSkinsChecker, _selectedSkinChecker);
        _view.ItemViewClicked += OnItemViewClicked;

        OnSkinsButtonClicked();
        _selectionButton.gameObject.SetActive(false);
        _buyButton.gameObject.SetActive(false);
    }

    private void OnItemViewClicked(ShopItemView view)
    {
        _selectedView = view;

        if (_selectedView.Model != null)
        {
            _skinPlacement.InstantiateModel(_selectedView.Model);
        }

        _openSkinsChecker.Visit(_selectedView.ShopItem);

        if (_openSkinsChecker.IsOpened)
        {
            _selectedSkinChecker.Visit(_selectedView.ShopItem);

            if (_selectedSkinChecker.IsSelected)
            {
                ShowSelectedText();
                return;
            }

            ShowSelectionButton();
        }
        else
        {
            ShowBuyButton(_selectedView.Price);
        }
    }

    private void ShowSelectedText()
    {
        _selectedText.gameObject.SetActive(true);
        _buyButton.gameObject.SetActive(false);
        _selectionButton.gameObject.SetActive(false);
    }

    private void OnBuyButtonClicked()
    {
        if (_wallet.IsEnough(_selectedView.Price))
        {
            _wallet.RemoveMoney(_selectedView.Price);

            _skinUnlocker.Visit(_selectedView.ShopItem);

            SelectSkin();

            _selectedView.Unlock();

            _jsonSaver.Save();
        }

        OnItemViewClicked(_selectedView);
    }

    private void ShowSelectionButton()
    {
        _selectionButton.gameObject.SetActive(true);
        _buyButton.gameObject.SetActive(false);
        _selectedText.gameObject.SetActive(false);
    }

    private void OnSelectionButtonClicked()
    {
        SelectSkin();
        _jsonSaver.Save();

        OnItemViewClicked(_selectedView);
    }

    private void OnSkinsButtonClicked()
    {
        _statsButton.Unselect();
        _skinsButton.Select();

        _view.CreateItemView(_content.EquippableItems);
        _statsView.gameObject.SetActive(false);
    }

    private void OnStatsButtonClicked()
    {
        _statsButton.Select();
        _skinsButton.Unselect();

        _view.CreateItemView(_content.StatsItems);

        _statsView.Show();
        _statsView.gameObject.SetActive(true);
    }

    private void ShowBuyButton(int price)
    {
        _buyButton.gameObject.SetActive(true);
        _buyButton.UpdateText(price);

        if (_wallet.IsEnough(price))
            _buyButton.Unlock();
        else
            _buyButton.Lock();

        _selectionButton.gameObject.SetActive(false);
        _selectedText.gameObject.SetActive(false);
    }

    private void SelectSkin()
    {
        _skinSelector.Visit(_selectedView.ShopItem);
        _view.Select(_selectedView);
    }

    private void AddMoneyOnClick()
    {
        _wallet.AddMoney(50);
    }
}