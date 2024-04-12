using TMPro;
using UnityEngine;

namespace Ram.Chillvania.UI.Common
{
    public class Timer : MonoBehaviour
    {
        [SerializeField] private TMP_Text _text;

        private float _elapsedTime = 0f;
        private int _minutes;
        private int _seconds;
        private bool _isPlaying = false;

        private void Update()
        {
            if (_isPlaying == false)
                return;

            _elapsedTime += Time.deltaTime;
            UpdateTimerText();
        }

        public void StartCounting()
        {
            _isPlaying = true;
        }

        private void UpdateTimerText()
        {
            _minutes = Mathf.FloorToInt(_elapsedTime / 60);
            _seconds = Mathf.FloorToInt(_elapsedTime % 60);
            _text.text = string.Format("{0:00}:{1:00}", _minutes, _seconds);
        }
    }
}