using UnityEngine;
using PlayerPrefs = Agava.YandexGames.Utility.PlayerPrefs;

public class JsonSaver
{
    private IPersistantData _persistentData;

    public JsonSaver(IPersistantData persistentData)
    {
        _persistentData = persistentData;
    }

    public void Save()
    {
        string json = JsonUtility.ToJson(_persistentData.PlayerData);

#if !UNITY_EDITOR && UNITY_WEBGL
        PlayerPrefs.SetString(PrefsSaveKeys.PlayerData, json);
        PlayerPrefs.Save();
#endif
    }

    public void Load()
    {
        PlayerData playerData = new PlayerData();

#if !UNITY_EDITOR && UNITY_WEBGL
        if (PlayerPrefs.HasKey(PrefsSaveKeys.PlayerData))
        {
            string json = PlayerPrefs.GetString(PrefsSaveKeys.PlayerData);
            playerData = JsonUtility.FromJson<PlayerData>(json);
        }
#endif
        _persistentData.PlayerData = playerData;
    }
}
