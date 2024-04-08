using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(CanvasGroup))]
public class UpgradeCardsView : MonoBehaviour
{
    [SerializeField] private UpgradeSystem _upgradeSystem;
    [SerializeField] private NextButton _nextButton;
    [SerializeField] private PauseControl _pauseControl;

    private List<UpgradeCard> _cards = new ();
    private FadeAnimation _fadeAnimation;
    private CanvasGroup _canvasGroup;

    private float _fadeDuration = 0.5f;

    private void Awake()
    {
        _canvasGroup = GetComponent<CanvasGroup>();

        for (int i = 0; i < transform.childCount; i++)
            if (transform.GetChild(i).TryGetComponent(out UpgradeCard card))
                _cards.Add(card);

        _fadeAnimation = new FadeAnimation(_canvasGroup);
        _fadeAnimation.Disable(0);
    }

    private void OnEnable()
    {
        _upgradeSystem.PointGetted += OnPointGetted;
        _upgradeSystem.StatsIncreased += OnStatsIncreased;
        _nextButton.Clicked += OnNextButtonClicked;
    }

    private void OnDisable()
    {
        _upgradeSystem.PointGetted -= OnPointGetted;
        _upgradeSystem.StatsIncreased -= OnStatsIncreased;
        _nextButton.Clicked -= OnNextButtonClicked;
    }

    private void OnPointGetted()
    {
        for (int i = 0; i < _cards.Count; i++)
        {
            if (_cards[i].Cost > _upgradeSystem.Points)
                _cards[i].Lock();
            else
                _cards[i].Unlock();
        }

        _fadeAnimation.Enable(_fadeDuration, () =>
        {
            _pauseControl.SetInGamePause(true);
        });
    }

    private void OnStatsIncreased()
    {
        _fadeAnimation.Disable(_fadeDuration);
        _pauseControl.SetInGamePause(false);
    }

    private void OnNextButtonClicked()
    {
        _fadeAnimation.Disable(_fadeDuration);
        _pauseControl.SetInGamePause(false);
    }
}