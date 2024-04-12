using System;
using Ram.Chillvania.UI.Common;
using UnityEngine;
using UnityEngine.UI;

public class EntryMenu : MonoBehaviour
{
    [SerializeField] private Button _playButton;
    [SerializeField] private Button _rulesButton;
    [SerializeField] private RulesPanel _rulesPanel;

    private FadeAnimation _fadeAnimation;
    private CanvasGroup _canvasGroup;
    private float _fadeDuration = 0.5f;

    public event Action PlayClicked;

    private void Awake()
    {
        _canvasGroup = GetComponent<CanvasGroup>();
        _fadeAnimation = new FadeAnimation(_canvasGroup);
    }

    private void OnEnable()
    {
        _playButton.onClick.AddListener(OnPlayButtonClicked);
        _rulesButton.onClick.AddListener(OnRulesButtonClicked);
    }

    private void OnDisable()
    {
        _playButton.onClick.RemoveListener(OnPlayButtonClicked);
        _rulesButton.onClick.RemoveListener(OnRulesButtonClicked);
    }

    private void OnPlayButtonClicked()
    {
        _fadeAnimation.Disable(_fadeDuration);
        gameObject.SetActive(false);
        PlayClicked?.Invoke();
    }

    private void OnRulesButtonClicked()
    {
        _rulesPanel.gameObject.SetActive(true);
    }
}