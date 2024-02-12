using System;
using UnityEngine;
using UnityEngine.UI;

public class RestartButton : MonoBehaviour
{
    private UnityEngine.UI.Button _button;

    public event Action Clicked;

    private void Awake()
    {
        _button = GetComponent<UnityEngine.UI.Button>();
    }

    private void OnEnable()
    {
        _button.onClick.AddListener(OnButtonClicked);
    }

    private void OnDisable()
    {
        _button.onClick.RemoveListener(OnButtonClicked);
    }

    private void OnButtonClicked()
    {
        Clicked?.Invoke();
    }
}
