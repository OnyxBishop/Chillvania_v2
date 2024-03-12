using System;
using UnityEngine;

public class VideoAd : MonoBehaviour
{
    public void ShowInterstitial(Action<bool> onCloseCallback) =>
        Agava.YandexGames.InterstitialAd.Show(OnOpenCallback, onCloseCallback);

    public void ShowRewarded(Action onRewardedCallback) =>
        Agava.YandexGames.VideoAd.Show(OnOpenCallback, onRewardedCallback, OnCloseCallback);

    private void OnOpenCallback()
    {
        Time.timeScale = 0;
        AudioListener.volume = 0f;
    }

    private void OnCloseCallback()
    {
        Time.timeScale = 1;
        AudioListener.volume = 1f;
    }
}
