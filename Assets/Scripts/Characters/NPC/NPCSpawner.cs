using System;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

public class NPCSpawner : MonoBehaviour
{
    [SerializeField] private Transform _enemyPoint;
    [SerializeField] private Transform _allyPoint;
    [SerializeField] private AreaCollector _collectArea;
    [SerializeField] private SnowballSpawner _spawner;
    [SerializeField] private BoostItemsSpawner _boostSpawner;
    [SerializeField] private NPCFabric _fabric;

    private List<NPC> _spawnedNPC = new List<NPC>();

    public virtual event Action<NPC> Spawned;

    public virtual void Spawn(NpcType type)
    {
        NPC npc = _fabric.Create(type);
        SetPosition(npc);
        npc.transform.parent = transform;
        npc.GetComponent<NPCMachine>().Init(_spawner, _boostSpawner, _collectArea);
        _spawnedNPC.Add(npc);

        Spawned?.Invoke(npc);
    }

    public void DisableAllNPCMovement()
    {
        foreach (NPC npc in _spawnedNPC)
        {
            npc.IMovable.Disable();
        }
    }

    public void IncreaseAllStrenght()
    {
        int value = 1;

        foreach (NPC npc in _spawnedNPC)
        {
            if (npc.Type == NpcType.Enemy)
                npc.Interaction.Upgrade(value);
        }
    }

    public virtual int CalculateCount(NpcType type)
    {
        return _spawnedNPC.Count(npc => npc.Type == type);
    }

    private void SetPosition(NPC npc)
    {
        if (npc.Type == NpcType.Ally)
            npc.transform.position = _allyPoint.position;

        if (npc.Type == NpcType.Enemy)
            npc.transform.position = _enemyPoint.position;
    }
}