using Agava.WebUtility;
using UnityEngine;

public class PageFocus : MonoBehaviour
{
    [SerializeField] private PauseControl _pauseControl;

    private AudioSource _backgroundSource;
    private float _maxAudioVolume = 0.25f;

    private void Awake()
    {
        _backgroundSource = BackgroundSound.Instance.AudioSource;
    }

    private void OnEnable()
    {
        Application.focusChanged += OnInBackgroundChangeApp;
        WebApplication.InBackgroundChangeEvent += OnInBackgroundChangeWeb;
    }

    private void OnDisable()
    {
        Application.focusChanged -= OnInBackgroundChangeApp;
        WebApplication.InBackgroundChangeEvent -= OnInBackgroundChangeWeb;
    }

    private void OnInBackgroundChangeApp(bool inApp)
    {
        _pauseControl.SetPauseOnFocus(!inApp);
        _backgroundSource.volume = !inApp ? 0 : _maxAudioVolume;
    }

    private void OnInBackgroundChangeWeb(bool isBackground)
    {
        _pauseControl.SetPauseOnFocus(isBackground);
        _backgroundSource.volume = isBackground ? 0 : _maxAudioVolume;
    }
}