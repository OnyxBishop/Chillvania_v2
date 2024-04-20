using DG.Tweening;
using UnityEngine;

namespace Ram.Chillvania.GameHints
{
    public class Pointer : MonoBehaviour
    {
        private Tween moveY;

        public void SetPosition(Vector3 targetPosition)
        {
            float y = targetPosition.y + 2f;
            transform.position = new Vector3(targetPosition.x, y, targetPosition.z);
        }

        public void PlayAnimation()
        {
            moveY = transform.DOMoveY(transform.position.y + 0.4f, 1).SetLoops(-1, LoopType.Yoyo).OnKill(() => moveY = null);
        }

        public void StopAnimation()
        {
            if (moveY.IsActive())
                moveY.Kill();
        }
    }
}