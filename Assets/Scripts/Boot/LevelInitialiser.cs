using UnityEngine;

public class LevelInitialiser : MonoBehaviour
{
    [SerializeField] private ModelSpawner _modelSpawner;
    [SerializeField] private UpgradeArea _upgradeArea;
    [SerializeField] private AreaCollector _areaCollector;
    [SerializeField] private BuildProgress _allyBuildProgress;
    [SerializeField] private BuildProgress _enemyBuildProgress;
    [SerializeField] private DynamicDifficulty _dynamicDifficulty;
    [SerializeField] private GameEndViewer _gameEndViewer;

    public void InitAll()
    {
        _modelSpawner.CreateRandom();

        _dynamicDifficulty.Init(_modelSpawner.Ally);
        _dynamicDifficulty.enabled = true;

        _upgradeArea.Init(_modelSpawner.Ally);
        _upgradeArea.gameObject.SetActive(true);

        _areaCollector.Init(_modelSpawner.Ally.transform, _modelSpawner.Enemy.transform);

        _allyBuildProgress.Init(_modelSpawner.Ally);
        _allyBuildProgress.gameObject.SetActive(true);

        _enemyBuildProgress.Init(_modelSpawner.Enemy);
        _enemyBuildProgress.gameObject.SetActive(true);

        _gameEndViewer.Init(_modelSpawner.Ally, _modelSpawner.Enemy);
        _gameEndViewer.gameObject.SetActive(true);
    }
}
