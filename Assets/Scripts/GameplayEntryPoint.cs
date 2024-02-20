using System;
using System.Collections;
using UnityEngine;

public class GameplayEntryPoint : MonoBehaviour
{
    [SerializeField] private LevelStarter _levelStarter;
    [SerializeField] private LevelInitialiser _levelInitialiser;
    [SerializeField] private MapCreator _mapCreator;

    public event Action GameReady;

    private IEnumerator Start()
    {
        Map map = _mapCreator.Create();

        map.InitAll();
        yield return new WaitUntil(() => map.IsInit);

        _levelStarter.Init(map);
        _levelInitialiser.InitAll(map);
        yield return new WaitUntil(() => _levelInitialiser.IsInit);

        GameReady?.Invoke();
    }
}