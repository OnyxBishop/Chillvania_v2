using System;
using UnityEngine;

[RequireComponent(typeof(Collider))]
public class Interaction : MonoBehaviour, IUpgradeable
{
    [SerializeField] private ItemAnimator _itemAnimator;
    [SerializeField] private Transform _inventoryPoint;
    [SerializeField] private BoostItemView _boostItemView;

    private ICharacter _character;
    private Animator _animator;
    private Inventory _inventory;

    public event Action<float> Upgraded;

    public Collider Collider { get; private set; }
    public ISelectable CurrentItem { get; private set; }
    public float Strenght { get; private set; }

    private void Awake()
    {
        _character = GetComponentInParent<ICharacter>();
        _animator = GetComponentInParent<Animator>();
        Collider = GetComponent<Collider>();
    }

    private void OnTriggerStay(Collider other)
    {
        if (other.TryGetComponent(out ISelectable selectable))
        {
            if (CurrentItem == null && _inventory.TryGetEmptyCell(out _))
            {
                SetInFront(selectable);
                Action(selectable);
            }
        }
    }

    public void Init(int strenght, Inventory inventory)
    {
        Strenght = strenght;
        _inventory = inventory;
    }

    public void Upgrade(float value)
    {
        Strenght += value;
        Upgraded?.Invoke(Strenght);
    }

    private void SetInFront(ISelectable selectable)
    {
        Vector3 position = new Vector3(0f, 0.1f, 0.5f);
        Quaternion rotation = Quaternion.LookRotation(_character.IMovable.CurrentDirection, Vector3.up);

        if (selectable is Snowball snowball)
        {
            snowball.transform.parent = transform;
            snowball.transform.localPosition = position;
            snowball.transform.rotation = rotation;
        }
    }

    private void Action(ISelectable item)
    {
        CurrentItem = item;
        CurrentItem.Interact(_character);
        _animator.SetLayerWeight(1, 1f);

        CurrentItem.InteractEnded += OnItemInteracted;
    }

    private void OnItemInteracted()
    {
        _animator.SetLayerWeight(1, 0);
        _animator.SetTrigger(CharacterAnimatorData.Params.PickUp);
        _itemAnimator.AnimationEnded += OnAnimationEnded;
        _itemAnimator.Animate(CurrentItem, _inventoryPoint);
        CurrentItem.InteractEnded -= OnItemInteracted;
    }

    private void OnAnimationEnded()
    {
        _itemAnimator.AnimationEnded -= OnAnimationEnded;
        _inventory.AddItem(CurrentItem);
        CurrentItem.Disable();
        CurrentItem = null;
    }
}