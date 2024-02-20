using UnityEngine;

public class NPCFabric : MonoBehaviour
{
    [SerializeField] private NPC _enemyPrefab;
    [SerializeField] private NPC _allyPrefab;
    [SerializeField] private StatsConfig _statsConfig;

    public NPC Create(NpcType type)
    {
        NPC npc = Instantiate(_allyPrefab);

        npc.SetType(type);
        npc.SetAuraColor(type);
        npc.SetConfiguration(_statsConfig);
        return npc;
    }
}
