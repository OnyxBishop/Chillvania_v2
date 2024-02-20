using UnityEngine;

public class Map : MonoBehaviour
{
    [SerializeField] private Transform _playerSpawnPoint;
    [SerializeField] private ModelSpawner _modelSpawner;
    [SerializeField] private UpgradeArea _upgradeArea;
    [SerializeField] private AreaCollector _areaCollector;
    [SerializeField] private NPCSpawner _npcSpawner;
    [SerializeField] private CameraSwitcher _cameraSwitcher;

    public Transform PlayerSpawnPoint => _playerSpawnPoint;
    public ModelSpawner ModelSpawner => _modelSpawner;
    public UpgradeArea UpgradeArea => _upgradeArea;
    public NPCSpawner NPCSpawner => _npcSpawner;
    public CameraSwitcher CameraSwitcher => _cameraSwitcher;

    public bool IsInit { get; private set; } = false;

    public void InitAll()
    {
        _modelSpawner.Create();
        _upgradeArea.Init(_modelSpawner.Ally);
        _areaCollector.Init(_modelSpawner.Ally.transform, _modelSpawner.Enemy.transform);

        IsInit = true;
    }
}