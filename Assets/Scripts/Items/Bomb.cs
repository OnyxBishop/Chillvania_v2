using System;
using UnityEngine;
using DG.Tweening;

[RequireComponent(typeof(AudioSource))]
public class Bomb : BoostItem
{
    private AudioSource _audioSource;

    public override BoostItemType Type => BoostItemType.Bomb;
    public override event Action<BoostItem> Taken;

    private void Awake()
    {
        Power = 3f;
        _audioSource = GetComponent<AudioSource>();
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
        transform.DOMoveY(transform.position.y + 0.2f, 1).SetLoops(-1, LoopType.Yoyo);
    }

    public override void Interact()
    {
        IsOccupied = true;
        transform.DOKill();
        Taken?.Invoke(this);
    }

    public void PlayExplosionSound()
    {
        _audioSource.Play();
    }
}
