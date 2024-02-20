using PlayerPrefs = Agava.YandexGames.Utility.PlayerPrefs;

public class ModelsProgress : SaveFile
{
    private int _progress;

    public override int CurrentProgress => _progress;

    public override void Load()
    {
        _progress = PlayerPrefs.GetInt(SaveKey);
    }

    public override void Save()
    {
        PlayerPrefs.SetInt(SaveKey, _progress);
    }
}