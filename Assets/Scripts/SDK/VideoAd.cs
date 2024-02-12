using UnityEngine;

public class VideoAd : MonoBehaviour
{
    public void ShowInterstitial() =>
        Agava.YandexGames.InterstitialAd.Show(OnOpenCallback, OnCloseCallback);

    private void OnOpenCallback()
    {
        Time.timeScale = 0;
        AudioListener.volume = 0f;
    }

    private void OnCloseCallback(bool wasShown)
    {
        if (wasShown)
        {
            Time.timeScale = 1;
            AudioListener.volume = 1f;
        }
    }
}
