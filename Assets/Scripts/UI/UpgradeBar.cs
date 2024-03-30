using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class UpgradeBar : MonoBehaviour
{
    [SerializeField] private UpgradeSystem _upgradeSystem;
    [SerializeField] private TMP_Text _pointCount;
    [SerializeField] private Slider _slider;
    [SerializeField] private AudioSource _upgradeAudioSource;
    [SerializeField] private AudioClip _pointsChangedAudioClip;

    private void Start()
    {
        _slider.value = 0;
        _pointCount.text = 0.ToString();
    }

    private void OnEnable()
    {
        _upgradeSystem.PointsChanged += OnPointsChanged;
        _upgradeSystem.ProgressChanged += OnValueChanged;
    }

    private void OnDisable()
    {
        _upgradeSystem.PointsChanged -= OnPointsChanged;
        _upgradeSystem.ProgressChanged += OnValueChanged;
        _slider.value = 0;
        _pointCount.text = 0.ToString();
    }

    private void OnPointsChanged(int currentPoints)
    {
        _pointCount.text = currentPoints.ToString();
        _upgradeAudioSource.PlayOneShot(_pointsChangedAudioClip);
    }

    private void OnValueChanged(float value)
    {
        _slider.value = Mathf.Lerp(_slider.value, value, 1.5f);
    }
}