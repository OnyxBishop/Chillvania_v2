using Ram.Chillvania.MainObjects;
using Ram.Chillvania.UI;
using UnityEngine;

namespace Ram.Chillvania.Boot
{
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
}