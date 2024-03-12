using System;
using UnityEngine;

public class GameEndView : MonoBehaviour
{
    [SerializeField] private LevelEnder _levelEnder;
    [SerializeField] private Canvas _gameEndCanvas;
    [SerializeField] private NextButton _nextButton;
    [SerializeField] private BlackScreen _blackScreen;
    [SerializeField] private VideoAd _videoAd;

    public event Action OnNextButtonClicked;

    private void OnEnable()
    {
        _levelEnder.CameraAnimationEnded += OnAnimationEnded;
        _nextButton.Clicked += OnButtonClicked;
    }

    private void OnDisable()
    {
        _levelEnder.CameraAnimationEnded -= OnAnimationEnded;
        _nextButton.Clicked -= OnButtonClicked;
    }

    private void OnAnimationEnded()
    {
        _gameEndCanvas.gameObject.SetActive(true);
    }

    private void OnButtonClicked()
    {
        _blackScreen.Enable(OnBlackScreenEnabled);
        _gameEndCanvas.gameObject.SetActive(false);
    }

    private void OnBlackScreenEnabled()
    {
#if UNITY_WEBGL && !UNITY_EDITOR
        _videoAd.ShowInterstitial(OnAdCloseCallback);
        return;
#endif

        OnNextButtonClicked?.Invoke();
    }

    private void OnAdCloseCallback(bool wasShown)
    {
        if (wasShown)
        {
            Time.timeScale = 1;
            AudioListener.volume = 1f;

            OnNextButtonClicked?.Invoke();
        }
    }
}