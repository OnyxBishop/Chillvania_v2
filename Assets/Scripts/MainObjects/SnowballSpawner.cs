using System;
using System.Collections.Generic;
using UnityEngine;
using Random = UnityEngine.Random;

public class SnowballSpawner : MonoBehaviour
{
    [SerializeField] private SnowballFabric _fabric;
    [SerializeField] private Transform _path;
    [SerializeField, Range(0, 16)] private int _count;
    [SerializeField] private LayerMask _layerMask;

    private Transform[] _spawnPoints;
    private List<Snowball> _createdSnowballs;

    private float _overlapRadius = 0.1f;
    private float _elapsedTime;
    private float _delay = 1f;

    private void Start()
    {
        _createdSnowballs = new List<Snowball>();
        _spawnPoints = new Transform[_path.childCount];

        for (int i = 0; i < _path.childCount; i++)
        {
            _spawnPoints[i] = _path.GetChild(i);
        }
    }

    private void Update()
    {
        if (_createdSnowballs.Count == _count)
            return;

        _elapsedTime += Time.deltaTime;

        if (_elapsedTime >= _delay)
        {
            _elapsedTime = 0;

            Spawn();
        }
    }

    private void Spawn()
    {
        Transform spawnPoint = null;
        Collider[] colliders = new Collider[1];
        bool isSuccess = false;

        while (!isSuccess)
        {
            spawnPoint = _spawnPoints[Random.Range(0, _spawnPoints.Length)];

            int collidersCount = Physics.OverlapSphereNonAlloc(spawnPoint.position, _overlapRadius, colliders, _layerMask);

            if (collidersCount == 0)
            {
                isSuccess = true;
            }
        }

        Snowball snowball = _fabric.Create(spawnPoint);
        snowball.InteractStarting += OnInteractStarting;
        _createdSnowballs.Add(snowball);
    }

    public Snowball GetClosestSnowball(NPC npc)
    {
        float closestDistance = float.MaxValue;
        Snowball closestSnowball = null;

        foreach (Snowball snowball in _createdSnowballs)
        {
            float distance = (npc.transform.position - snowball.transform.position).sqrMagnitude;

            if (distance < closestDistance)
            {
                closestDistance = distance;
                closestSnowball = snowball;
            }
        }


        return closestSnowball;
    }

    private void OnInteractStarting(Snowball snowball)
    {
        snowball.InteractStarting -= OnInteractStarting;
        _createdSnowballs.Remove(snowball);
    }
}