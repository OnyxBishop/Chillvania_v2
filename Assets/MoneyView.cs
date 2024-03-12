using TMPro;
using UnityEngine;

public class MoneyView : MonoBehaviour
{
    [SerializeField] private TMP_Text _countText;
    [SerializeField] private Wallet _wallet;

    private void Start()
    {
        _countText.text = _wallet.Money.ToString();
    }

    private void OnEnable()
    {
        _wallet.MoneyChanged += OnMoneyChanged;
    }

    private void OnDisable()
    {
        _wallet.MoneyChanged -= OnMoneyChanged;
    }

    private void OnMoneyChanged(int value)
    {
        _countText.text = value.ToString();
    }
}
