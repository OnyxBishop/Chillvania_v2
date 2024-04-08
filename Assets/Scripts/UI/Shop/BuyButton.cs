using System;
using DG.Tweening;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class BuyButton : MonoBehaviour
{
    [SerializeField] private Button _button;
    [SerializeField] private TMP_Text _text;

    [SerializeField] private Color _lockColor;
    [SerializeField] private Color _unlockColor;

    [SerializeField][Range(0.1f, 0.3f)] private float _shakeScaleDuration;
    [SerializeField] private float _xShakeScaleStrenght;
    [SerializeField] private float _yShakeScaleStrenght;

    [SerializeField][Range(0, 1)] private float _lockAnimationDuration;
    [SerializeField][Range(0.5f, 5)] private float _lockAnimationStrength;

    private bool _isLock;
    private Tween _scaleTweener;

    public event Action Clicked;

    private void OnEnable() => _button.onClick.AddListener(OnClicked);

    private void OnDisable() => _button.onClick.RemoveListener(OnClicked);

    public void UpdateText(int price) => _text.text = price.ToString();

    public void Lock()
    {
        _isLock = true;
        _text.color = _lockColor;

        _scaleTweener?.Kill();
    }

    public void Unlock()
    {
        _isLock = false;
        _text.color = _unlockColor;

        _scaleTweener = transform.DOShakeScale(
            duration: _shakeScaleDuration,
            strength: new Vector3(_xShakeScaleStrenght, _yShakeScaleStrenght),
            randomnessMode: ShakeRandomnessMode.Harmonic)
            .OnComplete(() => transform.localScale = Vector3.one);
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
