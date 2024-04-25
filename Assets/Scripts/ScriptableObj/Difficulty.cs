using System.Collections.Generic;
using UnityEngine;

namespace Ram.Chillvania.ScriptableObjects
{
    [CreateAssetMenu(fileName = "DifficultyConfig", menuName = "Game Variables")]
    public class Difficulty : ScriptableObject
    {
        [Header("PLayer Variables")]
        [SerializeField][Range(1, 4)] private int _snowPieceValue;
        [SerializeField][Range(1, 100)] private List<int> _percentagesToGetPoint;

        [Header("Bots Variables")]
        [SerializeField] private List<int> _collectedSnowToAddNpc;
        [SerializeField] private List<int> _spendedPointsToAddNPC;

        public int SnowPieceValue => _snowPieceValue;
        public IReadOnlyList<int> PercentagesToGetPoint => _percentagesToGetPoint;
        public IReadOnlyList<int> CollectedSnowToAddNpc => _collectedSnowToAddNpc;
        public IReadOnlyList<int> SpendedPointsToAddNPC => _spendedPointsToAddNPC;
    }
}