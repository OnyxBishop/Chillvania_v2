using System;

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