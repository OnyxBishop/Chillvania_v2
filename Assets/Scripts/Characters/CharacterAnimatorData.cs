using UnityEngine;

public static class CharacterAnimatorParams
{
    public static readonly int IsRunning = Animator.StringToHash(nameof(IsRunning));
    public static readonly int PickUp = Animator.StringToHash(nameof(PickUp));
    public static readonly int IsRolling = Animator.StringToHash(nameof(IsRolling));
}