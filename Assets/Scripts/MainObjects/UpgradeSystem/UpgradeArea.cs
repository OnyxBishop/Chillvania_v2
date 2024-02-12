using System;
using System.Collections.Generic;
using UnityEngine;

public class UpgradeArea : MonoBehaviour
{
    [SerializeField] private Difficulty _difficulty;
    [SerializeField] private NPCSpawner _npcSpawner;
    [SerializeField] private AudioSource _upgradeAudioSource;
    [SerializeField] private AudioClip _pointsChangedAudioClip;

    private Character _character;
    private ModelBuilder _allyModel;
    private List<int> _upgradeLevels;

    private int _currentLevel = 0;
    private int _upgradeCount = 0;
    private int _maxStrenght = 3;
    private int _maxCapacity = 5;
    private int _maxTeamCount = 3;

    public event Action<int> Triggered;
    public event Action<int> PointsChanged;
    public event Action<float> ProgressChanged;
    public event Action<StatsType> StatsEnded;

    public void Init(ModelBuilder allyModel)
    {
        _allyModel = allyModel;
    }

    private void Start()
    {
        _upgradeLevels = new List<int>();

        for (int i = 0; i < _difficulty.PercentagesToGetPoint.Count; i++)
        {
            _upgradeLevels.Add(Mathf.RoundToInt(_allyModel.TotalNeedSnow *
                _difficulty.PercentagesToGetPoint[i] / 100));
        }
    }

    private void OnEnable()
    {
        _allyModel.ValueChanged += OnValueChanged;
    }

    private void OnDisable()
    {
        _allyModel.ValueChanged -= OnValueChanged;
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.TryGetComponent(out Character character))
        {
            _character = character;
            Triggered?.Invoke(1);
        }
    }

    private void OnTriggerExit(Collider other)
    {
        if (other.TryGetComponent<Character>(out _))
        {
            _character = null;
            Triggered?.Invoke(0);
        }
    }

    public void IncreaseStat(StatsType type)
    {
        if (type.Equals(StatsType.Strenght))
        {
            float increaseValue = 1f;

            _upgradeCount -= 1;
            PointsChanged?.Invoke(_upgradeCount);
            _character.Upgrade(_character.Interaction, increaseValue);

            if (_character.Interaction.Strenght >= _maxStrenght)
            {
                StatsEnded?.Invoke(StatsType.Strenght);
            }
        }

        if (type.Equals(StatsType.Capacity))
        {
            int increaseValue = 1;

            _upgradeCount -= 1;
            PointsChanged?.Invoke(_upgradeCount);
            _character.Upgrade(_character.Inventory, increaseValue);

            if (_character.Inventory.Cells.Count >= _maxCapacity)
            {
                StatsEnded?.Invoke(StatsType.Capacity);
            }
        }

        if (type.Equals(StatsType.TeamCount))
        {
            _upgradeCount -= 1;
            PointsChanged?.Invoke(_upgradeCount);
            _npcSpawner.Spawn(NpcType.Ally);

            if (_npcSpawner.CalculateCount(NpcType.Ally) >= _maxTeamCount)
            {
                StatsEnded?.Invoke(StatsType.TeamCount);
            }
        }
    }

    public void SetPoints(int count)
    {
        _upgradeCount = count;
        PointsChanged?.Invoke(_upgradeCount);
        _upgradeAudioSource.PlayOneShot(_pointsChangedAudioClip);
    }

    private void OnValueChanged(float value)
    {
        if (_upgradeLevels.Count == 0)
            return;

        CalculateProgress(value);

        if (value >= _upgradeLevels[0])
        {
            _upgradeCount += 1;
            _upgradeAudioSource.PlayOneShot(_pointsChangedAudioClip);
            _upgradeLevels.RemoveAt(0);
            PointsChanged?.Invoke(_upgradeCount);
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