using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "ShopContent", menuName = "Shop/ShopContent")]
public class ShopContent : ScriptableObject
{
    [SerializeField] private List<EquippableItem> _equippableItems;
    [SerializeField] private List<CharacterStatsItem> _statsItems;

    public IReadOnlyList<EquippableItem> EquippableItems => _equippableItems;
    public IReadOnlyList<CharacterStatsItem> StatsItems => _statsItems;
}
