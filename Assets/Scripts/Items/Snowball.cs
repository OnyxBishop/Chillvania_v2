using System;
using Ram.Chillvania.Characters;
using UnityEngine;

namespace Ram.Chillvania.Items
{
    [RequireComponent(typeof(Collider))]
    public class Snowball : MonoBehaviour, ISelectable
    {
        private BallMovement _movement;
        private Collider _collider;

        public event Action<Snowball> InteractStarting;
        public event Action InteractEnded;

        public float Weight { get; private set; }
        public float RollingDuration => _movement.RollingDuration;
        public SelectableType Type => SelectableType.Snowball;

        private void Awake()
        {
            _collider = GetComponent<Collider>();
            _movement = GetComponentInChildren<BallMovement>();
        }

        public void Interact(ICharacter character)
        {
            _collider.enabled = false;
            InteractStarting?.Invoke(this);

            _movement.Move(character);
            _movement.MaxWeightReached += OnMaxWeightReached;
        }

        public void OnMaxWeightReached(float weight)
        {
            Weight = weight;
            InteractEnded?.Invoke();
        }

        public void Disable()
        {
            gameObject.SetActive(false);
            _collider.enabled = false;
        }

        public void Enable()
        {
            gameObject.SetActive(true);
            _collider.enabled = true;
            transform.rotation = Quaternion.identity;
        }

        public void DestroySelf()
        {
            Destroy(gameObject);
        }
    }
}