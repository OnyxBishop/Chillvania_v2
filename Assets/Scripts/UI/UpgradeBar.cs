using UnityEngine;
using UnityEngine.UI;

public class UpgradeBar : MonoBehaviour
{
    [SerializeField] private UpgradeSystem _upgradeSystem;
    [SerializeField] private Slider _slider;
    [SerializeField] private AudioSource _upgradeAudioSource;
    [SerializeField] private AudioClip _pointsChangedAudioClip;

    private void Start() =>
        _slider.value = 0;

    private void OnEnable()
    {
        _upgradeSystem.Upgraded += OnUpgraded;
        _upgradeSystem.ProgressChanged += OnValueChanged;
    }

    private void OnDisable()
    {
        _upgradeSystem.Upgraded -= OnUpgraded;
        _upgradeSystem.ProgressChanged += OnValueChanged;
    }

    private void OnUpgraded()
    {
        _upgradeAudioSource.PlayOneShot(_pointsChangedAudioClip);
    }

    private void OnValueChanged(float value)
    {
        _slider.value = Mathf.Lerp(_slider.value, value, 1.5f);
    }
}