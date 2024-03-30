using System.Collections.Generic;
using UnityEngine;

public class ModelSpawner : MonoBehaviour
{
    [SerializeField] private List<ModelBuilder> _models;
    [SerializeField] private Transform _allyPoint;
    [SerializeField] private Transform _enemyPoint;

    public ModelBuilder Ally { get; private set; }
    public ModelBuilder Enemy { get; private set; }

    public void Create(float characterStrenght)
    {
        int index = PlayerPrefs.GetInt(PrefsSaveKeys.ModelIndex, 0);
        ModelBuilder curentModel = _models[index];
        index++;

        if (index >= _models.Count)
        {
            index = 0;
            PlayerPrefs.SetInt(PrefsSaveKeys.ModelIndex, index);
            PlayerPrefs.Save();
        }

        Ally = Instantiate(curentModel, _allyPoint.transform.position, _allyPoint.rotation, transform);
        Enemy = Instantiate(curentModel, _enemyPoint.transform.position, _enemyPoint.rotation, transform);

        Ally.Init(characterStrenght);
        Enemy.Init(characterStrenght);

        PlayerPrefs.SetInt(PrefsSaveKeys.ModelIndex, index);
        PlayerPrefs.Save();
    }
}