using System;
using Ram.Chillvania.Common;
using UnityEngine;

namespace Ram.Chillvania.SDK
{
    public class VideoAd : MonoBehaviour
    {
        [SerializeField] private PauseControl _pauseControl;

        public void ShowInterstitial(Action<bool> onCloseCallback) =>
            Agava.YandexGames.InterstitialAd.Show(OnOpenCallback, onCloseCallback);

        public void ShowRewarded(Action onRewardedCallback) =>
            Agava.YandexGames.VideoAd.Show(OnOpenCallback, onRewardedCallback, OnCloseCallback);

        private void OnOpenCallback()
        {
            _pauseControl.SetPauseOnUI(true);
        }

        private void OnCloseCallback()
        {
            _pauseControl.SetPauseOnUI(false);
        }
    }
}