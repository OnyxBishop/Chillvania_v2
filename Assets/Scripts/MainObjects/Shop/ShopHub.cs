using System;
using System.Collections;
using Ram.Chillvania.UI.Buttons;
using Ram.Chillvania.UI.Common;
using UnityEngine;

public class ShopHub : MonoBehaviour
{
    [SerializeField] private Canvas _shopCanvas;
    [SerializeField] private UIEnableSwitcher _uiEnableSwitcher;
    [SerializeField] private NextButton _nextButton;
    [SerializeField] private ShopBootstrap _shopBootstrap;
    [SerializeField] private BlackScreen _blackScreen;

    public event Action NextButtonClicked;

    private void OnEnable() => _nextButton.Clicked += OnNextButtonClicked;
    private void OnDisable() => _nextButton.Clicked -= OnNextButtonClicked;

    public void Activate()
    {
        StartCoroutine(Init());
    }

    private IEnumerator Init()
    {
        _uiEnableSwitcher.Disable();
        _shopBootstrap.Init();
        yield return new WaitUntil(() => _shopBootstrap.IsInit);

        _shopCanvas.gameObject.SetActive(true);
        _blackScreen.Disable();
    }

    private void OnNextButtonClicked()
    {
        _blackScreen.Enable(() =>
        {
            _shopCanvas.gameObject.SetActive(false);
            NextButtonClicked?.Invoke();
        });
    }
}