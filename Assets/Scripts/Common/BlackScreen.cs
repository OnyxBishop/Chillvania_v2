using System;
using UnityEngine;
using UnityEngine.UI;

namespace Ram.Chillvania.UI.Common
{
    public class BlackScreen : MonoBehaviour
    {
        [SerializeField] private Image _image;
        [SerializeField] private float _animationDuration = 2f;

        private BlackScreenAnimation _animation;

        private void Awake()
        {
            _animation = new BlackScreenAnimation(_image, this);
            _image.fillAmount = 0;
        }

        public void Enable(Action callback = null)
        {
            _animation.Enable(_animationDuration, callback);
        }

        public void Disable(Action callback = null)
        {
            _animation.Disable(_animationDuration, callback);
        }
    }
}