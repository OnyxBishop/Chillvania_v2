using System;
using UnityEngine;

[CreateAssetMenu(fileName = "Configuration", menuName = "Config", order = 51)]
public class StatsConfig : ScriptableObject
{
    [Header("Player")]
    [SerializeField] private int _playerStrenght;
    [SerializeField, Range(2, 4)] private int _playerSpeed;
    [SerializeField] private int _playerInventoryCount;

    [Header("Bot")]
    [SerializeField] private int _botStrenght;
    [SerializeField, Range(2, 4)] private int _botSpeed;
    [SerializeField] private int _botInventoryCount;

    public PlayerConfig Player =>
        new PlayerConfig(_playerStrenght, _playerSpeed, _playerInventoryCount);

    public BotConfig Bot =>
        new BotConfig(_botStrenght, _botSpeed, _botInventoryCount);
}

public class PlayerConfig
{
    public PlayerConfig(int strenght, int speed, int inventoryCount)
    {
        Strenght = strenght;
        Speed = speed;
        InventoryCount = inventoryCount;
    }

    public int Strenght { get; private set; }
    public int Speed { get; private set; }
    public int InventoryCount { get; private set; }
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