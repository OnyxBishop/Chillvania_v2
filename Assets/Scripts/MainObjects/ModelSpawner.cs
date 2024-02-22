using System.Collections.Generic;
using UnityEngine;

public class ModelSpawner : MonoBehaviour
{
    [SerializeField] private List<ModelBuilder> _models;
    [SerializeField] private IntProgress _modelsProgress;
    [SerializeField] private Transform _allyPoint;
    [SerializeField] private Transform _enemyPoint;

    public ModelBuilder Ally { get; private set; }
    public ModelBuilder Enemy { get; private set; }

    public void Create()
    {
        int index = _modelsProgress.CurrentProgress;
        ModelBuilder curentModel = _models[index];

        _modelsProgress.Add();
        _modelsProgress.Save();

        Ally = Instantiate(curentModel, _allyPoint.transform.position, _allyPoint.rotation, transform);
        Enemy = Instantiate(curentModel, _enemyPoint.transform.position, _enemyPoint.rotation, transform);

        if (_modelsProgress.CurrentProgress >= _models.Count)
        {
            _modelsProgress.SetDefaultValue();
            _modelsProgress.Save();
        }
    }
}