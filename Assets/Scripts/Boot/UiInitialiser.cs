using Ram.Chillvania.UI.Common;
using UnityEngine;

public class UiInitialiser : MonoBehaviour
{
    [SerializeField] private BuildProgress _allyBuildProgress;
    [SerializeField] private BuildProgress _enemyBuildProgress;

    public void InitAll(Map map)
    {
        ModelBuilder allyModel = map.ModelSpawner.Ally;
        ModelBuilder enemyModel = map.ModelSpawner.Enemy;

        Activate(_allyBuildProgress, allyModel);
        Activate(_enemyBuildProgress, enemyModel);
    }

    private void Activate(BuildProgress bar, ModelBuilder model)
    {
        bar.Init(model);
        bar.gameObject.SetActive(true);
    }
}