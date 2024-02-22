using UnityEngine;
using Unity.AI.Navigation;
using Cinemachine;

public class Map : MonoBehaviour
{
    [SerializeField] private Transform _playerSpawnPoint;
    [SerializeField] private ModelSpawner _modelSpawner;
    [SerializeField] private AreaCollector _areaCollector;
    [SerializeField] private NPCSpawner _npcSpawner;
    [SerializeField] private NavMeshSurface _navMeshArea;
    [SerializeField] private CinemachineSmoothPath _cameraPath;

    public Transform PlayerSpawnPoint => _playerSpawnPoint;
    public ModelSpawner ModelSpawner => _modelSpawner;
    public NPCSpawner NPCSpawner => _npcSpawner;

    public CinemachineSmoothPath CameraPath => _cameraPath;

    public bool IsInit { get; private set; } = false;

    public void InitAll()
    {
        _modelSpawner.Create();
        _areaCollector.Init(_modelSpawner.Ally.transform, _modelSpawner.Enemy.transform);
        GenerateNavMesh();

        IsInit = true;
    }

    private void GenerateNavMesh()
    {
        _navMeshArea.BuildNavMesh();
    }
}