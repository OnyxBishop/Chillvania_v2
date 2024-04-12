using System;
using UnityEngine;

namespace Ram.Chillvania.Items.BoostItems
{
    public abstract class BoostItem : MonoBehaviour
    {
        public abstract BoostItemType Type { get; }

        public abstract event Action<BoostItem> Taken;
        public float Power { get; protected set; }
        public bool IsOccupied { get; protected set; }

        public abstract void StartAnimation();
        public abstract void Interact();
    }
}