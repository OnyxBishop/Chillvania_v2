using System;
using System.Collections;
using UnityEngine;

public class GameplayEntryPoint : MonoBehaviour
{
    [SerializeField] private LevelStarter _levelStarter;
    [SerializeField] private LevelEnder _levelEnder;
    [SerializeField] private UiInitialiser _UiInitialiser;
    [SerializeField] private MapCreator _mapCreator;
    [SerializeField] private CameraSwitcher _cameraSwitcher;

    public event Action GameReady;

    private IEnumerator Start()
    {
        Map map = _mapCreator.Create();
        yield return new WaitUntil(() => map.IsInit);

        _cameraSwitcher.InitDollyCart(map.CameraPath);
        _levelStarter.Init(map);
        _levelEnder.Init(_cameraSwitcher, map.ModelSpawner.Ally, map.ModelSpawner.Enemy);
        _levelEnder.GameEnded += OnGameEnded;
        _UiInitialiser.InitAll(map);

        GameReady?.Invoke();
    }

    private void OnGameEnded()
    {

    }
}