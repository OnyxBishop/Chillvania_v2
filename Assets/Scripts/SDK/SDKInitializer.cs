using System.Collections;
using UnityEngine;
using UnityEngine.SceneManagement;
using PlayerPrefs = Agava.YandexGames.Utility.PlayerPrefs;

namespace Agava.YandexGames
{
    public sealed class SDKInitializer : MonoBehaviour
    {
        private const string TutorialEntryPoint = nameof(TutorialEntryPoint);
        private const string CloudSaveTest = nameof(CloudSaveTest);
        private const string GameplayEntryPoint = nameof(GameplayEntryPoint);

        private const string FirstEntryKey = nameof(FirstEntryKey);

        private void Awake()
        {
            YandexGamesSdk.CallbackLogging = true;
        }

        private IEnumerator Start()
        {
#if !UNITY_EDITOR && UNITY_WEBGL
           yield return YandexGamesSdk.Initialize(OnInitialized);
#else 
            OnInitialized();

            yield break;
#endif
        }

        private void OnInitialized()
        {
            PlayerPrefs.Load(OnLoadCloudSuccessCallback);
        }

        private void OnLoadCloudSuccessCallback()
        {
            if (PlayerPrefs.HasKey(FirstEntryKey))
            {
                SceneManager.LoadScene(GameplayEntryPoint);
            }
            else
            {
                PlayerPrefs.SetInt(FirstEntryKey, 1);
                SceneManager.LoadScene(TutorialEntryPoint);
            }
        }
    }
}