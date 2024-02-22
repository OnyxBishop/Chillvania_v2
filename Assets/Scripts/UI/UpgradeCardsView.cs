using UnityEngine;

public class UpgradeCardsView : MonoBehaviour
{
    [SerializeField] private UpgradeSystem _upgradeSystem;

    private FadeAnimation _fadeAnimation;
    private CanvasGroup _canvasGroup;

    private float _fadeDuration = 0.5f;

    private void Awake()
    {
        _canvasGroup = GetComponentInParent<CanvasGroup>();
        _fadeAnimation = new FadeAnimation(_canvasGroup);
        _fadeAnimation.Disable(0);
    }

    private void OnEnable()
    {
        _upgradeSystem.Upgraded += OnUpgraded;
        _upgradeSystem.StatsIncreased += OnStatsIncreased;
    }

    private void OnDisable()
    {
        _upgradeSystem.Upgraded -= OnUpgraded;
        _upgradeSystem.StatsIncreased -= OnStatsIncreased;
    }

    private void OnUpgraded()
    {
        _fadeAnimation.Enable(_fadeDuration, Pause);
    }

    private void OnStatsIncreased()
    {
        _fadeAnimation.Disable(_fadeDuration);
        Time.timeScale = 1f;
    }

    private void Pause()
    {
        Time.timeScale = 0f;
    }
}