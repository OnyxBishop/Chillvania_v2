using System;
using System.Collections;
using UnityEngine;
using UnityEngine.UI;

public class BlackScreenAnimation
{
    private Image _image;
    private BlackScreen _coroutineObject;

    public BlackScreenAnimation(Image image, BlackScreen coroutineObject)
    {
        _image = image;
        _coroutineObject = coroutineObject;
    }

    public void Enable(float duration, Action callback = null)
    {
        _coroutineObject.StartCoroutine(Fade(1, duration, callback));
    }

    public void Disable(float duration, Action callback = null)
    {
        _coroutineObject.StartCoroutine(Fade(0, duration, callback));
    }

    private IEnumerator Fade(float to, float duration, Action callback)
    {
        float elapsedTime = 0f;
        float from = _image.fillAmount;
        float delta;

        while (elapsedTime < duration)
        {
            elapsedTime += Time.deltaTime;

            delta = elapsedTime / duration;
            _image.fillAmount = Mathf.MoveTowards(from, to, delta);

            yield return null;
        }

        _image.fillAmount = to;
        callback?.Invoke();
    }
}