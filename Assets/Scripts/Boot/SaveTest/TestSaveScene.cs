using UnityEngine;
using UnityEngine.UI;
using TMPro;
using Agava.YandexGames;
using PlayerPrefs = Agava.YandexGames.Utility.PlayerPrefs;

public class TestSaveScene : MonoBehaviour
{
    [SerializeField] private Button _saveButton;
    [SerializeField] private Button _addButton;
    [SerializeField] private TMP_Text _progress;

    private const string SaveKey = "ModelsSave";
    private int _currentProgress = 0;

    private void Start()
    {
#if UNITY_WEBGL && !UNITY_EDITOR
        _currentProgress = PlayerPrefs.GetInt(SaveKey);
#endif

        _progress.text = _currentProgress.ToString();
    }

    private void OnEnable()
    {
        _saveButton.onClick.AddListener(OnSaveClicked);
        _addButton.onClick.AddListener(() => Add(1));
    }

    private void OnDisable()
    {
        _saveButton.onClick.RemoveListener(OnSaveClicked);
    }

    private void OnSaveClicked()
    {
#if UNITY_WEBGL && !UNITY_EDITOR
        PlayerPrefs.SetInt(SaveKey, _currentProgress);
        PlayerPrefs.Save();
#endif
    }

    private void Add(int value)
    {
        _currentProgress += value;
        _progress.text = _currentProgress.ToString();
    }
}
