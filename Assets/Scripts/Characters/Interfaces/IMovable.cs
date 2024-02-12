using System;
using UnityEngine;

public interface IMovable
{
    public bool IsMoving { get; }
    public Vector3 CurrentDirection { get; }
    public float Speed { get; }
    public void Move(Vector3 destination, Action callback);
    public void Enable();
    public void Disable();
    public void Init(int speed);
    public void Upgrade(float value);
}
