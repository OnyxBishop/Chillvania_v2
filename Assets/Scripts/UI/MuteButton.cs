using UnityEngine;
using UnityEngine.UI;

namespace Ram.Chillvania.UI.Buttons
{
    public class MuteButton : MonoBehaviour
    {
        [SerializeField] private Sprite _disableSprite;

        private Button _mute;
        private Image _iconImage;
        private Sprite _enableSprite;

        private void Awake()
        {
            _mute = GetComponent<Button>();
            _iconImage = transform.GetChild(0).GetComponent<Image>();
            _enableSprite = _iconImage.sprite;
        }

        private void OnEnable()
        {
            _mute.onClick.AddListener(OnMuteClicked);
        }

        private void OnDisable()
        {
            _mute.onClick.RemoveListener(OnMuteClicked);
        }

        private void OnMuteClicked()
        {
            AudioListener.volume = AudioListener.volume == 0 ? 1 : 0;
            _iconImage.sprite = AudioListener.volume == 0 ? _disableSprite : _enableSprite;
        }
    }
}