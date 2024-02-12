using System;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using Random = UnityEngine.Random;

public class BoostItemsSpawner : MonoBehaviour
{
    [SerializeField] private Transform _path;
    [SerializeField] private BoostItemsFabric _fabric;
    [SerializeField] private LayerMask _layerMask;
    
    private Transform[] _spawnPoints;
    private List<BoostItem> _spawnedItems;

    private float _delay = 7f;
    private float _elapsedTime;

    private int _capacity = 3;
    private float _overlapRadius = 1f;  

    public bool HasBoost => _spawnedItems.Count(item => item.Type == BoostItemType.Bomb 
    || item.Type == BoostItemType.Skates) > 0;

    public event Action Spawned;

    private void Start()
    {
        _spawnPoints = new Transform[_path.childCount];
        _spawnedItems = new(_capacity);

        for (int i = 0; i < _path.childCount; i++)
            _spawnPoints[i] = _path.GetChild(i);
    }

    private void Update()
    {
        _elapsedTime += Time.deltaTime;

        if (_spawnedItems.Count == _capacity)
            return;

        if (_elapsedTime < _delay)
            return;

        _elapsedTime = 0;

        Spawn();
    }

    public float GetDistanceToClosestItem(NPC npc, out BoostItem boostItem)
    {
        float closestDistance = float.MaxValue;
        boostItem = null;

        foreach (BoostItem item in _spawnedItems)
        {
            float distance = (npc.transform.position - item.transform.position).sqrMagnitude;

            if (distance < closestDistance)
            {
                closestDistance = distance;
                boostItem = item;
            }
        }

        return closestDistance;
    }

    private void Spawn()
    {
        Transform spawnPoint = ChoosePoint();
        BoostItemType type = ChooseItemType();

        if (spawnPoint == null)
            return;

        BoostItem item = _fabric.Create(type, spawnPoint);
        item.Taken += OnItemTaken;
        _spawnedItems.Add(item);

        Spawned?.Invoke();
    }

    private Transform ChoosePoint()
    {
        Transform spawnPoint;
        Collider[] colliders = new Collider[2];
        int spotCount = 3;

        for (int i = 0; i < spotCount; i++)
        {
            spawnPoint = _spawnPoints[Random.Range(0, _spawnPoints.Length)];

            int collidersCount = Physics.OverlapSphereNonAlloc(spawnPoint.position, _overlapRadius, colliders, _layerMask);

            if (collidersCount == 0)
                return spawnPoint;
        }

        return null;
    }

    private BoostItemType ChooseItemType()
    {
        float random = Random.value;
        float bombChance = 0.6f;

        if (random >= bombChance)
            return BoostItemType.Bomb;
        else
            return BoostItemType.Skates;
    }

    private void OnItemTaken(BoostItem item)
    {
        item.Taken -= OnItemTaken;
        _spawnedItems.Remove(item);
    }
}