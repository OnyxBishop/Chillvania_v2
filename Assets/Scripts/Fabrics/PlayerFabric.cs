using UnityEngine;

public class PlayerFabric : MonoBehaviour
{
    [SerializeField] private Character _characterPrefab;
    [SerializeField] private StatsConfig _statsConfig;

    public Character Create(Transform spawnPoint)
    {
        Character character = Instantiate(_characterPrefab, spawnPoint.position, spawnPoint.rotation);
        character.SetConfiguration(_statsConfig);

        return character;
    }
}