using Agava.YandexGames;
using System;
using UnityEngine;

public class LevelStarter : MonoBehaviour
{
    [SerializeField] private GameplayEntryPoint _entryPoint;
    [SerializeField] private EntryMenu _entryMenu;
    [SerializeField] private UpgradeSystem _upgradeSystem;
    [SerializeField] private DynamicDifficulty _dynamicDifficulty;
    [SerializeField] private UIEnableSwitcher _uiEnableSwitcher;
    [SerializeField] private InputSetter _inputSetter;
    [SerializeField] private InputView _inputView;
    [SerializeField] private CameraSwitcher _cameraSwitcher;

    private Map _map;
    private Character _character;
    private IPersistantData _data;
    private JsonSaver _jsonSaver;

    public event Action GameStarting;

    private void Start()
    {
        _entryPoint.GameReady += OnGameReadyToStart;
        _entryMenu.PlayClicked += OnPlayButtonClicked;
    }

    private void OnDestroy()
    {
        _entryPoint.GameReady -= OnGameReadyToStart;
        _entryMenu.PlayClicked -= OnPlayButtonClicked;
    }

    public void Init(Character character, Map map)
    {
        _character = character;
        _map = map;

        if (_jsonSaver == null)
        {
            _data = new PersistentData();
            _jsonSaver = new(_data);
            _jsonSaver.Load();
        }
    }

    public void OnGameReadyToStart()
    {
#if UNITY_WEBGL && !UNITY_EDITOR
        YandexGamesSdk.GameReady();
#endif 
        _character.transform.SetPositionAndRotation
            (_map.PlayerSpawnPoint.position, _map.PlayerSpawnPoint.localRotation);

        _inputSetter.Set(_character);
        _inputSetter.Enable();
        _inputView.Init(_inputSetter);

        _upgradeSystem.Init(_character, _map.ModelSpawner.Ally, _map.NPCSpawner);
        _dynamicDifficulty.Init(_map.ModelSpawner.Ally, _upgradeSystem, _map.NPCSpawner);
        _dynamicDifficulty.enabled = true;

        _uiEnableSwitcher.Disable();
    }

    public void StartNext()
    {
        GameStarting?.Invoke();
        _cameraSwitcher.FollowToCharacter(_character);
        _character.EnableMovement();
        _uiEnableSwitcher.Enable(_character);
        _map.NPCSpawner.Spawn(NpcType.Enemy);
        _map.NPCSpawner.MultiplySpawn(NpcType.Ally, _data.PlayerData.Config.TeamCount);
    }

    public void ResetLevel()
    {
        _character = null;
        _map = null;
        _inputSetter.Disable();
    }

    private void OnPlayButtonClicked()
    {
        GameStarting?.Invoke();
        _cameraSwitcher.FollowToCharacter(_character);
        _character.EnableMovement();
        _uiEnableSwitcher.Enable(_character);
        _inputView.ShowHint();
        _map.NPCSpawner.Spawn(NpcType.Enemy);
    }
}