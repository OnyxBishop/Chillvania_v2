using System.Collections.Generic;
using UnityEngine;

public class LeaderboardView : MonoBehaviour
{
    [SerializeField] private Transform _container;
    [SerializeField] private LeaderboardElement _elementPrefab;

    private List<LeaderboardElement> _spawnedElements = new ();

    public void Construct(List<LeaderboardPlayer> players)
    {
        Clear();

        foreach (LeaderboardPlayer player in players)
        {
            LeaderboardElement elementInstance = Instantiate(_elementPrefab, _container);
            elementInstance.Initialise(player.Rank, player.Name, player.Score);

            _spawnedElements.Add(elementInstance);
        }
    }

    private void Clear()
    {
        foreach (var element in _spawnedElements)
            Destroy(element.gameObject);

        _spawnedElements = new List<LeaderboardElement>();
    }
}