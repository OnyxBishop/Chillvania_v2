using Agava.YandexGames;
using System;
using UnityEngine;

public class LevelStarter : MonoBehaviour
{
    [SerializeField] private GameplayEntryPoint _entryPoint;
    [SerializeField] private PlayerFabric _playerFabric;
    [SerializeField] private UIEnableSwitcher _uiEnableSwitcher;
    [SerializeField] private InputSetter _inputSetter;
    [SerializeField] private InputView _inputView;
    [SerializeField] private EntryMenu _entryMenu;

    private Map _map;
    private Character _character;

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

    public void Init(Map map)
    {
        _map = map;
    }

    public void OnGameReadyToStart()
    {
#if UNITY_WEBGL && !UNITY_EDITOR
        YandexGamesSdk.GameReady();
#endif 

        _character = _playerFabric.Create(_map.PlayerSpawnPoint);
        _inputSetter.Set(_character);
        _inputView.Init(_inputSetter);
        _uiEnableSwitcher.Disable();
    }

    private void OnPlayButtonClicked()
    {
        GameStarting?.Invoke();
        _map.CameraSwitcher.FollowToCharacter(_character);
        _character.EnableMovement();
        _uiEnableSwitcher.Enable(_character);
        _inputView.ShowHint();
        _map.NPCSpawner.Spawn(NpcType.Enemy);
    }
}