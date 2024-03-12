using System;
using UnityEngine;
using DG.Tweening;

public class FadeAnimation
{
    private readonly CanvasGroup _canvasGroup;
    private Tweener _fadeTween;

    public FadeAnimation(CanvasGroup canvasGroup)
    {
        _canvasGroup = canvasGroup;
    }

    public void Enable(float duration, Action callback = null)
    {
        _canvasGroup.interactable = true;
        Fade(1, duration, callback);
    }

    public void Disable(float duration, Action callback = null)
    {
        _canvasGroup.interactable = false;
        Fade(0, duration, callback);
    }

    private void Fade(float endValue, float duration, Action callback)
    {
        if (_fadeTween.IsActive())
            _fadeTween.Kill();

        _fadeTween = _canvasGroup.DOFade(endValue, duration).OnComplete(() => callback?.Invoke());
    }
}
