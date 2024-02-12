using UnityEngine;
using UnityEngine.UI;

public class ShopCard : MonoBehaviour
{
    [SerializeField] private UpgradeArea _upgradeArea;
    [SerializeField] private StatsType _statType;
    [SerializeField] private Button _button;
    [SerializeField] private Image _lockImage;

    private Image _background;
    private Image _icon;
    private Image _description;

    public bool IsEnded { get; private set; } = false;

    private void Awake()
    {
        _background = GetComponent<Image>();
        _icon = transform.GetChild(0).GetComponent<Image>();
        _description = transform.GetChild(1).GetComponent<Image>();
    }

    private void OnEnable()
    {
        _upgradeArea.StatsEnded += OnUpgradesEnded;
        _button.onClick.AddListener(OnButtonClicked);
    }

    private void OnDisable()
    {
        _upgradeArea.StatsEnded -= OnUpgradesEnded;
        _button.onClick.RemoveListener(OnButtonClicked);
    }

    public void Fade()
    {
        _background.color = new Color(1f, 1f, 1f, 0.5f);
        _icon.color = new Color(1f, 1f, 1f, 0.5f);
        _description.color = new Color(1f, 1f, 1f, 0.5f);
    }

    public void Lock()
    {
        _lockImage.enabled = true;
        _button.interactable = false;
    }

    public void Unlock()
    {
        _lockImage.enabled = false;
        _button.interactable = true;
    }

    private void OnButtonClicked()
    {
        _upgradeArea.IncreaseStat(_statType);
    }

    private void OnUpgradesEnded(StatsType type)
    {
        if (type.Equals(_statType))
        {
            Fade();
            Lock();
            IsEnded = true;
        }
    }
}