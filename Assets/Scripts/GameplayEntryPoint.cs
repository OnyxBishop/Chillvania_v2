using System;
using System.Collections;
using Ram.Chillvania.Model;
using Ram.Chillvania.UI.Common;
using UnityEngine;

public class GameplayEntryPoint : MonoBehaviour
{
    [SerializeField] private LevelStarter _levelStarter;
    [SerializeField] private LevelEnder _levelEnder;
    [SerializeField] private PlayerFabric _playerFabric;
    [SerializeField] private UiInitialiser _UiInitialiser;
    [SerializeField] private MapCreator _mapCreator;
    [SerializeField] private CameraSwitcher _cameraSwitcher;
    [SerializeField] private ShopHub _shopHub;
    [SerializeField] private BlackScreen _blackScreen;

    private Character _character;
    private Map _map;

    public event Action GameReady;

    private void Start()
    {
        StartCoroutine(PrepareLevel());
    }

    private IEnumerator PrepareLevel()
    {
        _character = _playerFabric.Create();
        _map = _mapCreator.Create(_character.Interaction.Strenght);
        yield return new WaitUntil(() => _map.IsInit);

        _cameraSwitcher.InitDollyCart(_map.CameraPath);
        _levelStarter.Init(_character, _map);
        _levelEnder.Init(_cameraSwitcher, _map.ModelSpawner.Ally, _map.ModelSpawner.Enemy);
        _levelEnder.OnNextButtonClicked += OnEndLevel;
        _UiInitialiser.InitAll(_map);

        GameReady?.Invoke();
    }

    private void OnEndLevel()
    {
        _shopHub.Activate();
        _shopHub.NextButtonClicked += OnShopNextClicked;
        ResetAll();
    }

    private void OnShopNextClicked()
    {
        _shopHub.NextButtonClicked -= OnShopNextClicked;
        StartCoroutine(PrepareLevel());
        _blackScreen.Disable(() => _levelStarter.StartNext());
    }

    private void ResetAll()
    {
        _levelEnder.OnNextButtonClicked -= OnEndLevel;
        Destroy(_map.gameObject);
        Destroy(_character.gameObject);
        _cameraSwitcher.ResetDollyCart();
        _levelStarter.ResetLevel();
        _levelEnder.Disable();
    }
}