using System;
using Ram.Chillvania.Characters;
using Ram.Chillvania.Characters.NPC;
using Ram.Chillvania.Fabrics;
using UnityEngine;

namespace Ram.Chillvania.GameHints
{
    public class TutorialNPCSpawner : NPCSpawner
    {
        [SerializeField] private Transform[] _spawnPoints;
        [SerializeField] private NPCFabric _tutorialFabric;

        private int _count = 0;

        public override event Action<NPC> Spawned;

        public override void Spawn(NpcType type)
        {
            Transform spawnPoint = GetPoint();

            if (spawnPoint == null)
                return;

            NPC spawned = _tutorialFabric.Create(type);
            spawned.transform.position = spawnPoint.position;

            _count++;
            Spawned?.Invoke(spawned);
        }

        public override int CalculateCount(NpcType type)
        {
            return _count;
        }

        private Transform GetPoint()
        {
            if (_count >= _spawnPoints.Length)
                return null;

            return _spawnPoints[_count];
        }
    }
}