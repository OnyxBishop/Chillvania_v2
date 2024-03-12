using UnityEngine;

public class PlayerFabric : MonoBehaviour
{
    [SerializeField] private Character _characterPrefab;

    private IPersistantData _persistentData;
    private JsonSaver _jsonSaver;

    public Character Create()
    {
        InitData();

        Character character = Instantiate(_characterPrefab);
        character.SetConfiguration(_persistentData);

        return character;
    }

    private void InitData()
    {
        _persistentData = new PersistentData();
        _jsonSaver = new(_persistentData);
        _jsonSaver.Load();
    }
}