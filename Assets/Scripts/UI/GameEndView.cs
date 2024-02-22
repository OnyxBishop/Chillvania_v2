using System;
using UnityEngine;

public class GameEndView : MonoBehaviour
{
    [SerializeField] private LevelEnder _levelEnder;
    [SerializeField] private Canvas _gameEndCanvas;
    [SerializeField] private RestartButton _restartButton;
    [SerializeField] private VideoAd _videoAd;

    public event Action OnRestartClicked;

    private void OnEnable()
    {
        _levelEnder.CameraAnimationEnded += OnAnimationEnded;
        _restartButton.Clicked += OnButtonClicked;
    }

    private void OnDisable()
    {
        _levelEnder.CameraAnimationEnded -= OnAnimationEnded;
        _restartButton.Clicked -= OnButtonClicked;
    }

    private void OnAnimationEnded()
    {
        _gameEndCanvas.gameObject.SetActive(true);
    }

    private void OnButtonClicked()
    {
#if UNITY_WEBGL && !UNITY_EDITOR
        _videoAd.ShowInterstitial();
#endif
        OnRestartClicked?.Invoke();
    }
}