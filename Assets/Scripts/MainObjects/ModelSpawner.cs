using System.Collections.Generic;
using UnityEngine;
using Random = UnityEngine.Random;

public class ModelSpawner : MonoBehaviour
{
    [SerializeField] private List<ModelBuilder> _models;
    [SerializeField] private Transform _allyPoint;
    [SerializeField] private Transform _enemyPoint;

    public ModelBuilder Ally { get; private set; }
    public ModelBuilder Enemy { get; private set; }

    public void Create()
    {
        ModelBuilder curentModel = _models[Random.Range(0, _models.Count)];

        Ally = Instantiate(curentModel, _allyPoint.transform.position, _allyPoint.rotation, transform);
        Enemy = Instantiate(curentModel, _enemyPoint.transform.position, _enemyPoint.rotation, transform);
    }
}