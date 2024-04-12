using System;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace Ram.Chillvania.Shop.Buttons
{
    public class CategoryButton : MonoBehaviour
    {
        [SerializeField] private Button _button;
        [SerializeField] private TMP_Text _text;

        [SerializeField] private Color _selectColor;
        [SerializeField] private Color _unselectColor;
        [SerializeField] private Image _footer;

        public event Action Clicked;

        private void OnEnable() =>
            _button.onClick.AddListener(OnClicked);

        private void OnDisable() =>
            _button.onClick.RemoveListener(OnClicked);

        public void Select()
        {
            _footer.gameObject.SetActive(true);
            _text.color = _selectColor;
        }

        public void Unselect()
        {
            _footer.gameObject.SetActive(false);
            _text.color = _unselectColor;
        }

        private void OnClicked() =>
            Clicked?.Invoke();
    }
}