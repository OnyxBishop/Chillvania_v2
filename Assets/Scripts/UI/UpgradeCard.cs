using Ram.Chillvania.Upgrade;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace Ram.Chillvania.UI
{
    public class UpgradeCard : MonoBehaviour
    {
        [SerializeField] private UpgradeSystem _upgradeSystem;
        [SerializeField] private StatsType _statType;
        [SerializeField] private Button _button;
        [SerializeField] private Image _lockImage;
        [SerializeField] private TMP_Text _costText;
        [SerializeField] private int _cost;

        public int Cost => _cost;

        private void OnEnable()
        {
            _button.onClick.AddListener(OnButtonClicked);
        }

        private void OnDisable()
        {
            _button.onClick.RemoveListener(OnButtonClicked);
        }

        public void Unlock()
        {
            _lockImage.gameObject.SetActive(false);
            _button.interactable = true;
        }

        public void Lock()
        {
            _lockImage.gameObject.SetActive(true);
            _costText.text = _cost.ToString();
            _button.interactable = false;
        }

        private void OnButtonClicked()
        {
            _upgradeSystem.IncreaseStat(_statType, _cost);
        }
    }
}