using System.Collections.Generic;
using UnityEngine;

public class UpgradeCards : MonoBehaviour
{
    [SerializeField] private UpgradeArea _area;

    [SerializeField] private ShopCard _strenghtCard;
    [SerializeField] private ShopCard _inventoryCard;
    [SerializeField] private ShopCard _NPCaddCard;

    private FadeAnimation _fadeAnimation;
    private CanvasGroup _canvasGroup;
    private List<ShopCard> _cards;

    private float _fadeDuration = 0.5f;

    private void Awake()
    {
        _canvasGroup = GetComponentInParent<CanvasGroup>();
        _fadeAnimation = new FadeAnimation(_canvasGroup);
        _fadeAnimation.Disable(0);

        _cards = new List<ShopCard>
        {
            _strenghtCard,
            _inventoryCard,
            _NPCaddCard
        };

        Lock();
    }

    private void OnEnable()
    {
        _area.Triggered += OnAreaTriggered;
        _area.PointsChanged += OnPointsChanged;
    }

    private void OnDisable()
    {
        _area.Triggered -= OnAreaTriggered;
        _area.PointsChanged -= OnPointsChanged;
    }

    private void OnAreaTriggered(int targetAlpha)
    {
        if (targetAlpha == 1)
            _fadeAnimation.Enable(_fadeDuration);
        else
            _fadeAnimation.Disable(_fadeDuration);
    }

    private void OnPointsChanged(int points)
    {
        if (points > 0)
            Unlock();
        else
            Lock();
    }

    public void Unlock()
    {
        foreach (var card in _cards)
        {
            if (card.IsEnded == false)
                card.Unlock();
        }
    }

    private void Lock()
    {
        foreach (var card in _cards)
        {
            card.Lock();
        }
    }
}