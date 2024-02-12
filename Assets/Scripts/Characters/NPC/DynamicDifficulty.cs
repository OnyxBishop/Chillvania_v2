using System.Collections.Generic;
using UnityEngine;

public class DynamicDifficulty : MonoBehaviour
{
    [SerializeField] private UpgradeArea _upgradeArea;
    [SerializeField] private NPCSpawner _spawner;
    [SerializeField] private Difficulty _difficulty;

    private ModelBuilder _allyModel;
    private Queue<int> _valueToAdd = new();
    private Queue<int> _improveValues = new();
    private int _counter;

    public void Init(ModelBuilder allyModel)
    {
        _allyModel = allyModel;

        for (int i = 0; i < _difficulty.SnowValuesToAddNpc.Count; i++)
            _valueToAdd.Enqueue(_difficulty.SnowValuesToAddNpc[i]);

        for (int i = 0; i < _difficulty.ValuesToImprove.Count; i++)
            _improveValues.Enqueue(_difficulty.ValuesToImprove[i]);
    }

    private void OnEnable()
    {
        _allyModel.ValueChanged += OnSnowValueChanged;
        _upgradeArea.PointsChanged += OnCharacterUpgrade;
    }

    private void OnDisable()
    {
        _allyModel.ValueChanged -= OnSnowValueChanged;
        _upgradeArea.PointsChanged -= OnCharacterUpgrade;
    }

    private void OnSnowValueChanged(float snowValue)
    {
        if (_valueToAdd.Count <= 0)
            return;

        float percentage = (snowValue / _allyModel.TotalNeedSnow) * 100;

        if (percentage >= _valueToAdd.Peek())
        {
            _spawner.Spawn(NpcType.Enemy);
            _valueToAdd.Dequeue();
        }
    }

    private void OnCharacterUpgrade(int points)
    {
        _counter += points;

        if (_counter >= _improveValues.Peek())
        {
            _spawner.IncreaseAllStrenght();
            _improveValues.Dequeue();
        }
    }
}
