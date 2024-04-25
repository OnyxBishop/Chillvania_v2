namespace Ram.Chillvania.ScriptableObjects
{
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
}