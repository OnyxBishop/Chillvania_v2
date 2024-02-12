using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class UpgradeBar : MonoBehaviour
{
    [SerializeField] private Slider _slider;
    [SerializeField] private TMP_Text _upgradePoints;
    [SerializeField] private UpgradeArea _upgradeArea;

    private void Start()
    {
        _upgradePoints.text = 0.ToString();
        _slider.value = 0;
    }

    private void OnEnable()
    {
        _upgradeArea.PointsChanged += OnPointsChanged;
        _upgradeArea.ProgressChanged += OnValueChanged;
    }

    private void OnDisable()
    {
        _upgradeArea.PointsChanged -= OnPointsChanged;
         _upgradeArea.ProgressChanged += OnValueChanged;
    }

    private void OnPointsChanged(int points)
    {
        _upgradePoints.text = points.ToString();
    }

    private void OnValueChanged(float value)
    {
        _slider.value = Mathf.Lerp(_slider.value, value, 1.5f);
    }
}