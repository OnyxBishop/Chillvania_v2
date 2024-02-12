using UnityEngine;

public class PlayerFabric : MonoBehaviour
{
    [SerializeField] private Character _characterPrefab;
    [SerializeField] private StatsConfig _statsConfig;
    [SerializeField] private Transform _spawnPoint;

    public Character Create()
    {
        Character character = Instantiate(_characterPrefab, _spawnPoint.position, _spawnPoint.rotation);
        character.SetConfiguration(_statsConfig);

        return character;
    }
}
