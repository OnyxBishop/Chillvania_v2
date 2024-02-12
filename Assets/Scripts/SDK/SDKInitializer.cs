using System.Collections;
using UnityEngine;
using UnityEngine.SceneManagement;

namespace Agava.YandexGames
{
    public sealed class SDKInitializer : MonoBehaviour
    {
        [SerializeField] private BootstrapEntryPoint _entryPoint;

        private const string TutorialEntryPoint = nameof(TutorialEntryPoint);
        private const string GameplayEntryPoint = nameof(GameplayEntryPoint);

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
            if (_entryPoint.SaveFile.IsFirstPlaying)
                SceneManager.LoadScene(TutorialEntryPoint);
            else
                SceneManager.LoadScene(GameplayEntryPoint);
        }
    }
}