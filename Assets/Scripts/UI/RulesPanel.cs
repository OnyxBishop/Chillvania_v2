using UnityEngine;
using UnityEngine.UI;

namespace Ram.Chillvania.UI
{
    public class RulesPanel : MonoBehaviour
    {
        [SerializeField] private RuleView _view;
        [SerializeField] private Button _nextButton;
        [SerializeField] private Button _previousButton;
        [SerializeField] private Button _exitButton;

        private int _currentIndex = 0;

        private void OnEnable()
        {
            _nextButton.onClick.AddListener(OnNextClicked);
            _previousButton.onClick.AddListener(OnPreviousClicked);
            _exitButton.onClick.AddListener(OnExitClicked);

            _view.SetLanguage();
            _view.Render(ref _currentIndex);
        }

        private void OnDisable()
        {
            _nextButton.onClick.RemoveListener(OnNextClicked);
            _previousButton.onClick.RemoveListener(OnPreviousClicked);
            _exitButton.onClick.RemoveListener(OnExitClicked);

            _currentIndex = 0;
        }

        private void OnNextClicked()
        {
            _currentIndex++;
            _view.Render(ref _currentIndex);
        }

        private void OnPreviousClicked()
        {
            _currentIndex--;
            _view.Render(ref _currentIndex);
        }

        private void OnExitClicked()
        {
            gameObject.SetActive(false);
        }
    }
}