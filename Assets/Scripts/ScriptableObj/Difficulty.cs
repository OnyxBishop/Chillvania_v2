using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "DifficultyConfig", menuName = "Game Variables")]
public class Difficulty : ScriptableObject
{
    [Header("PLayer Variables")]
    [SerializeField, Range(1, 4)] private int _snowPieceValue;
    [SerializeField, Range(1,100)] private List<int> _percentagesToGetPoint;

    [Header("Bots Variables")]
    [SerializeField] private List<int> _snowValueToAddNpc;
    [SerializeField] private List<int> _upgradeValuesToImprove;

    public int SnowPieceValue => _snowPieceValue;
    public IReadOnlyList<int> PercentagesToGetPoint => _percentagesToGetPoint;
    public IReadOnlyList<int> SnowValuesToAddNpc => _snowValueToAddNpc;
    public IReadOnlyList<int> ValuesToImprove => _upgradeValuesToImprove;
}
