using Agava.YandexGames;
using System;
using UnityEngine;
using UnityEngine.SceneManagement;

public class LevelStarter : MonoBehaviour
{
    [SerializeField] private PlayerFabric _playerFabric;
    [SerializeField] private NPCSpawner _npcSpawner;
    [SerializeField] private EntryMenu _entryMenu;
    [SerializeField] private RestartButton _restartButton;
    [SerializeField] private CameraSwitcher _cameraSwitcher;
    [SerializeField] private BehavioursEnableSwitcher _behavioursEnableSwitcher;
    [SerializeField] private VideoAd _videoAd;
    [SerializeField] private LevelInitialiser _levelInitialiser;

    private Character _character;

    public event Action<Character> CharacterSpawned;

    private void Awake()
    {
        CreateCharacter();
        _levelInitialiser.InitAll();

#if UNITY_WEBGL && !UNITY_EDITOR
        YandexGamesSdk.GameReady();
#endif        
    }

    private void Start()
    {
        _behavioursEnableSwitcher.Init(_character);
        _behavioursEnableSwitcher.Disable();
        _entryMenu.GameStarting += OnGameStarting;
        _restartButton.Clicked += OnRestartClicked;
    }

    private void OnDestroy()
    {
        _entryMenu.GameStarting -= OnGameStarting;
        _restartButton.Clicked -= OnRestartClicked;
    }

    private void OnGameStarting()
    {
        _cameraSwitcher.FollowToCharacter(_character);
        _behavioursEnableSwitcher.Enable();
        _npcSpawner.Spawn(NpcType.Enemy);
    }

    private void CreateCharacter()
    {
        _character = _playerFabric.Create();
        CharacterSpawned?.Invoke(_character);
    }

    private void OnRestartClicked()
    {
#if UNITY_WEBGL && !UNITY_EDITOR
        _videoAd.ShowInterstitial();
#endif
        SceneManager.LoadScene(SceneManager.GetActiveScene().name);
    }
}