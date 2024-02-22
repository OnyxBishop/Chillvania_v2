using UnityEngine;
using PlayerPrefs = Agava.YandexGames.Utility.PlayerPrefs;

[CreateAssetMenu(fileName = "ProgressSave", menuName = "SaveFile", order = 51)]
public class IntProgress : Progress
{
    private int _currentProgress;

    public override int CurrentProgress => _currentProgress;

    public void Add(int value = 1)
    {
        _currentProgress += value;
    }

    public void SetDefaultValue()
    {
        _currentProgress = 0;
    }

    public override void Load()
    {
        _currentProgress = PlayerPrefs.GetInt(SaveKey);
    }

    public override void Save()
    {
        PlayerPrefs.SetInt(SaveKey, _currentProgress);
    }
}