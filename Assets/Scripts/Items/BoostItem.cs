using System;
using UnityEngine;

public abstract class BoostItem : MonoBehaviour
{
    public abstract BoostItemType Type { get; }
    public float Power { get; protected set; }
    public bool IsOccupied { get; protected set; }

    public abstract event Action<BoostItem> Taken;
    public abstract void StartAnimation();
    public abstract void Interact();
}