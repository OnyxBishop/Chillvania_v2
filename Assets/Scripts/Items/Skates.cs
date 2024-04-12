using System;
using DG.Tweening;

namespace Ram.Chillvania.Items.BoostItems
{
    public class Skates : BoostItem
    {
        public override event Action<BoostItem> Taken;
        public override BoostItemType Type => BoostItemType.Skates;

        private void Awake()
        {
            Power = 1.5f;
        }

        private void Start()
        {
            StartAnimation();
        }

        private void OnDestroy()
        {
            transform.DOKill();
        }

        public override void StartAnimation()
        {
            transform.DOMoveY(transform.position.y + 0.1f, 1).SetLoops(-1, LoopType.Yoyo);
        }

        public override void Interact()
        {
            IsOccupied = true;
            transform.DOKill();
            Taken?.Invoke(this);
        }
    }
}