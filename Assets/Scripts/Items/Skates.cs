using DG.Tweening;
using System;

public class Skates : BoostItem
{
    public override BoostItemType Type => BoostItemType.Skates;
    public override event Action<BoostItem> Taken;

    private void Awake()
    {
        Power = 0.5f;
    }

    private void Start()
    {
        StartAnimation();
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