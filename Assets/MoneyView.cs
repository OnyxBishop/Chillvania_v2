using TMPro;
using UnityEngine;

public class MoneyView : MonoBehaviour
{
    [SerializeField] private TMP_Text _countText;
    [SerializeField] private Wallet _wallet;

    private void OnEnable()
    {
        _countText.text = _wallet.Money.ToString();
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
