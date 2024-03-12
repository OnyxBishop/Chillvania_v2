using System;
using UnityEngine;

[CreateAssetMenu(fileName = "Configuration", menuName = "Config", order = 51)]
public class StatsConfig : ScriptableObject
{
    [Header("Bot")]
    [SerializeField] private int _botStrenght;
    [SerializeField, Range(2, 4)] private int _botSpeed;
    [SerializeField] private int _botInventoryCount;

    public BotConfig NewBot =>
        new BotConfig(_botStrenght, _botSpeed, _botInventoryCount);
}

[Serializable]
public class PlayerConfig
{
    public int Strenght;
    public float Speed;
    public int InventoryCount;
    public int TeamCount;

    public PlayerConfig(int strenght, float speed, int inventoryCount, int teamCount)
    {
        Strenght = strenght;
        Speed = speed;
        InventoryCount = inventoryCount;
        TeamCount = teamCount;
    }
}

public class BotConfig
{
    public BotConfig(int strenght, int speed, int inventoryCount)
    {
        Strenght = strenght;
        Speed = speed;
        InventoryCount = inventoryCount;
    }

    public int Strenght { get; private set; }
    public int Speed { get; private set; }
    public int InventoryCount { get; private set; }
}