using System;
using DG.Tweening;
using Ram.Chillvania.Items.BoostItems;
using UnityEngine;
using UnityEngine.UI;

public class BoostItemView : MonoBehaviour
{
    [SerializeField] private Image _viewImage;
    [SerializeField] private float _animationDuration;

    private ICharacter _character;
    private Action _onPickUpCallback;
    private Tween _animationTween;

    public event Action<BoostItem> Added;
    public event Action Removed;

    public BoostItem Item { get; private set; }

    private void Awake()
    {
        _character = GetComponentInParent<ICharacter>();
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.TryGetComponent(out BoostItem item))
        {
            if (Item == null && item.IsOccupied == false)
            {
                item.Interact();

                if (item is Bomb)
                    Add(item);
            }

            if (item is Skates skates)
            {
                _character.IMovable.Upgrade(skates.Power);
                skates.Interact();
                OnSkatesTaken();
                Destroy(skates.gameObject);
            }
        }
    }

    public void SetCallback(Action callback)
    {
        _onPickUpCallback = callback;
    }

    public void Remove(Transform target = null, Action onRemoveCallback = null)
    {
        Item.transform.DOComplete(true);
        Item.transform.parent = null;

        if (target != null)
        {
            Item.transform.DOMove(target.position, _animationDuration).OnComplete(() => OnMoveEnded());
            onRemoveCallback?.Invoke();
        }

        Removed?.Invoke();
    }

    private void Add(BoostItem item)
    {
        Item = item;

        Vector3 endPosition = Vector3.zero;
        Vector3 endRotation = Vector3.zero;

        item.transform.DOComplete(true);
        item.transform.parent = transform;

        item.transform.DOLocalMove(endPosition, _animationDuration);

        Added?.Invoke(item);
        _onPickUpCallback?.Invoke();
    }

    private void OnMoveEnded()
    {
        Destroy(Item.gameObject);
        Item = null;
    }

    private void OnSkatesTaken()
    {
        _viewImage.gameObject.SetActive(true);

        _animationTween?.Kill();

        _animationTween = _viewImage.DOFade(1, 1.2f).SetLoops(4).OnComplete(() => _viewImage.gameObject.SetActive(false));
    }
}