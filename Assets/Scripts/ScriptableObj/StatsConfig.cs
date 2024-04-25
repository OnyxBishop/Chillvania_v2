using UnityEngine;

namespace Ram.Chillvania.ScriptableObjects
{
    [CreateAssetMenu(fileName = "Configuration", menuName = "Config", order = 51)]
    public class StatsConfig : ScriptableObject
    {
        [Header("Bot")]
        [SerializeField] private int _botStrenght;
        [SerializeField][Range(2, 4)] private int _botSpeed;
        [SerializeField] private int _botInventoryCount;

        public BotConfig NewBot =>
            new BotConfig(_botStrenght, _botSpeed, _botInventoryCount);
    }
}