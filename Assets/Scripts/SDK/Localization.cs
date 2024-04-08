using Agava.YandexGames;
using Lean.Localization;
using UnityEngine;

public class Localization : MonoBehaviour
{
    private const string EnglishCode = "English";
    private const string RussianCode = "Russian";
    private const string TurkishCode = "Arabic";
    private const string English = "en";
    private const string Russian = "ru";
    private const string Turkish = "tr";

    [SerializeField] private LeanLocalization _leanLocalization;

    public string CurrentLanguage => _leanLocalization.CurrentLanguage;

    private void Awake()
    {
#if !UNITY_EDITOR && UNITY_WEBGL
        ChangeLanguage();
#endif
    }

    private void ChangeLanguage()
    {
        string languageCode = YandexGamesSdk.Environment.i18n.lang;

        switch (languageCode)
        {
            case English:
                _leanLocalization.SetCurrentLanguage(EnglishCode);
                break;
            case Russian:
                _leanLocalization.SetCurrentLanguage(RussianCode);
                break;
            case Turkish:
                _leanLocalization.SetCurrentLanguage(TurkishCode);
                break;
        }
    }
}