using UnityEngine;

namespace Ram.Chillvania.CameraLogic
{
    public static class CameraAnimatorParams
    {
        public static readonly int ShowPlayer = Animator.StringToHash(nameof(ShowPlayer));
        public static readonly int ShowEntry = Animator.StringToHash(nameof(ShowEntry));
        public static readonly int ShowEndGame = Animator.StringToHash(nameof(ShowEndGame));
    }
}