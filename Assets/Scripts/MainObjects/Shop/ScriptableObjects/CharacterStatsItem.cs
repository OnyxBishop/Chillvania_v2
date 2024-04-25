using Ram.Chillvania.Shop.Visitors;
using Ram.Chillvania.Upgrade;
using UnityEngine;

namespace Ram.Chillvania.Shop.ScriptableObjects
{
    [CreateAssetMenu(fileName = "StatsItemData", menuName = "ShopItem/StatsItem", order = 51)]
    public class CharacterStatsItem : ShopItem
    {
        [SerializeField] private StatsType _type;
        [SerializeField] private float _increseValue;

        public StatsType StatsType => _type;
        public float IncreseValue => _increseValue;

        public override void Accept(IShopItemVisitor visitor)
        {
            visitor.Visit(this);
        }
    }
}