using UnityEngine;

public class UiInitialiser : MonoBehaviour
{
    [SerializeField] private BuildProgress _allyBuildProgress;
    [SerializeField] private BuildProgress _enemyBuildProgress;

    public void InitAll(Map map)
    {
        ModelBuilder allyModel = map.ModelSpawner.Ally;
        ModelBuilder enemyModel = map.ModelSpawner.Enemy;

        _allyBuildProgress.Init(allyModel);
        _allyBuildProgress.gameObject.SetActive(true);

        _enemyBuildProgress.Init(enemyModel);
        _enemyBuildProgress.gameObject.SetActive(true);
    }
}
