using System;
using System.Collections.Generic;
using UnityEngine;

public class UpgradeSystem : MonoBehaviour
{
    [SerializeField] private Difficulty _difficulty;

    private Character _character;
    private NPCSpawner _npcSpawner;
    private ModelBuilder _allyModel;
    private List<int> _upgradeLevels;

    private int _points = 0;
    private int _currentLevel = 0;

    public int Points => _points;

    public event Action PointGetted;
    public event Action StatsIncreased;
    public event Action<int> PointsChanged;
    public event Action<float> ProgressChanged;

    private void OnDisable()
    {
        _allyModel.ValueChanged -= OnValueChanged;
    }

    public void Init(Character character, ModelBuilder allyModel, NPCSpawner npcSpawner)
    {
        _character = character;
        _allyModel = allyModel;
        _npcSpawner = npcSpawner;
        _points = 0;
        _upgradeLevels = new List<int>();

        for (int i = 0; i < _difficulty.PercentagesToGetPoint.Count; i++)
        {
            _upgradeLevels.Add(Mathf.RoundToInt(_allyModel.TotalNeedSnow *
                _difficulty.PercentagesToGetPoint[i] / 100));
        }

        _allyModel.ValueChanged += OnValueChanged;
    }

    public void IncreaseStat(StatsType type, int cost)
    {
        if (cost > _points)
            throw new ArgumentException("Not enough points to upgrade");

        if (type.Equals(StatsType.Strenght))
        {
            float increaseValue = 1f;
            _character.Upgrade(_character.Interaction, increaseValue);
        }

        if (type.Equals(StatsType.Capacity))
        {
            int increaseValue = 1;
            _character.Upgrade(_character.Inventory, increaseValue);
        }

        if (type.Equals(StatsType.TeamCount))
        {
            _npcSpawner.Spawn(NpcType.Ally);
        }

        _points -= cost;
        PointsChanged?.Invoke(_points);
        StatsIncreased?.Invoke();
    }

    public void SetUpgrade(int points = 1)
    {
        _points = points;
        PointGetted?.Invoke();
        PointsChanged?.Invoke(_points);
    }

    private void OnValueChanged(float value)
    {
        if (_upgradeLevels.Count == 0)
            return;

        CalculateProgress(value);

        if (value >= _upgradeLevels[0])
        {
            _upgradeLevels.RemoveAt(0);
            _points++;
            PointGetted?.Invoke();
            PointsChanged?.Invoke(_points);
        }
    }

    private void CalculateProgress(float value)
    {
        float levelProgress;

        if (_currentLevel < _upgradeLevels.Count - 1)
            levelProgress = Mathf.Clamp01(1 - (_upgradeLevels[0] - value) /
                    (_upgradeLevels[1] - _upgradeLevels[0]));
        else
            levelProgress = Mathf.Clamp01(1 - (_upgradeLevels[0] - value) /
                    (_upgradeLevels[0]));

        if (levelProgress == 1)
            levelProgress = 0;

        ProgressChanged?.Invoke(levelProgress);
    }
}