using System.Collections.Generic;
using Ram.Chillvania.MainObjects;
using Ram.Chillvania.Upgrade;
using UnityEngine;

namespace Ram.Chillvania.Characters.NPC
{
    public class DynamicDifficulty : MonoBehaviour
    {
        [SerializeField] private Difficulty _difficulty;

        private ModelBuilder _allyModel;
        private UpgradeSystem _upgradeSystem;
        private NPCSpawner _spawner;
        private Queue<int> _valueToAdd;
        private Queue<int> _spendedPoints;
        private int _counter = 0;

        private void OnEnable()
        {
            _allyModel.ValueChanged += OnSnowValueChanged;
            _upgradeSystem.StatsIncreased += OnCharacterStatsIncreased;
        }

        private void OnDisable()
        {
            _allyModel.ValueChanged -= OnSnowValueChanged;
            _upgradeSystem.StatsIncreased -= OnCharacterStatsIncreased;
        }

        public void Init(
            ModelBuilder allyModel, 
            UpgradeSystem upgradeArea, 
            NPCSpawner spawner)
        {
            _allyModel = allyModel;
            _upgradeSystem = upgradeArea;
            _spawner = spawner;
            _valueToAdd = new();
            _spendedPoints = new();

            for (int i = 0; i < _difficulty.CollectedSnowToAddNpc.Count; i++)
                _valueToAdd.Enqueue(_difficulty.CollectedSnowToAddNpc[i]);

            for (int i = 0; i < _difficulty.SpendedPointsToAddNPC.Count; i++)
                _spendedPoints.Enqueue(_difficulty.SpendedPointsToAddNPC[i]);

            enabled = true;
        }

        public void ResetAll()
        {
            enabled = false;

            _allyModel = null;
            _upgradeSystem = null;
            _spawner = null;
            _valueToAdd = null;
            _spendedPoints = null;
            _counter = 0;
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

        private void OnCharacterStatsIncreased()
        {
            if (_spendedPoints.Count <= 0)
                return;

            _counter++;

            if (_counter >= _spendedPoints.Peek())
            {
                _spawner.IncreaseAllStrenght();
                _spendedPoints.Dequeue();
            }
        }
    }
}