using UnityEngine;

public class LevelInitialiser : MonoBehaviour
{
    [SerializeField] private UpgradeBar _upgradeBar;
    [SerializeField] private BuildProgress _allyBuildProgress;
    [SerializeField] private BuildProgress _enemyBuildProgress;
    [SerializeField] private DynamicDifficulty _dynamicDifficulty;
    [SerializeField] private GameEndViewer _gameEndViewer;

    public bool IsInit { get; private set; } = false;

    public void InitAll(Map map)
    {
        ModelBuilder allyModel = map.ModelSpawner.Ally;
        ModelBuilder enemyModel = map.ModelSpawner.Enemy;

        _dynamicDifficulty.Init(allyModel, map.UpgradeArea, map.NPCSpawner);
        _dynamicDifficulty.enabled = true;

        _upgradeBar.Init(map.UpgradeArea);
        _upgradeBar.gameObject.SetActive(true);

        _allyBuildProgress.Init(allyModel);
        _allyBuildProgress.gameObject.SetActive(true);

        _enemyBuildProgress.Init(enemyModel);
        _enemyBuildProgress.gameObject.SetActive(true);

        _gameEndViewer.Init(allyModel, enemyModel);
        _gameEndViewer.gameObject.SetActive(true);

        IsInit = true;
    }
}
