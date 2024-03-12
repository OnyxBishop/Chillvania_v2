using System;
using UnityEngine;
using UnityEngine.UI;
using DG.Tweening;
using TMPro;

public class BuyButton : MonoBehaviour
{
    [SerializeField] private Button _button;
    [SerializeField] private TMP_Text _text;

    [SerializeField] private Color _lockColor;
    [SerializeField] private Color _unlockColor;

    [SerializeField, Range(0, 1)] private float _lockAnimationDuration;
    [SerializeField, Range(0.5f, 5)] private float _lockAnimationStrength;

    public event Action Clicked;

    private bool _isLock;

    private void OnEnable() => _button.onClick.AddListener(OnClicked);

    private void OnDisable() => _button.onClick.RemoveListener(OnClicked);

    public void UpdateText(int price) => _text.text = price.ToString();

    public void Lock()
    {
        _isLock = true;
        _text.color = _lockColor;
    }

    public void Unlock()
    {
        _isLock = false;
        _text.color = _unlockColor;
    }

    private void OnClicked()
    {
        if (_isLock)
        {
            transform.DOShakePosition(_lockAnimationDuration, _lockAnimationStrength);
            return;
        }

        Clicked?.Invoke();
    }
}
