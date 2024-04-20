using System.Collections;
using System.Collections.Generic;
using Ram.Chillvania.Characters;
using Ram.Chillvania.Fabrics;
using Ram.Chillvania.Items;
using Ram.Chillvania.Items.BoostItems;
using UnityEngine;

namespace Ram.Chillvania.MainObjects
{
    [RequireComponent(typeof(Collider))]
    public class AreaCollector : MonoBehaviour
    {
        [SerializeField] private ItemAnimator _allyItemAnimator;
        [SerializeField] private ItemAnimator _enemyItemAnimator;
        [SerializeField] private SnowballFabric _fabric;

        private Transform _allyModel;
        private Transform _enemyModel;

        private Dictionary<ICharacter, Coroutine> _animateCoroutines = new();
        private Coroutine _animateCoroutine;
        private WaitForSeconds _delay = new(0.3f);

        public Collider Zone { get; private set; }

        public void Init(Transform allyModel, Transform enemyModel)
        {
            _allyModel = allyModel;
            _enemyModel = enemyModel;
            Zone = GetComponent<Collider>();
        }

        private void OnTriggerEnter(Collider other)
        {
            if (other.TryGetComponent(out ICharacter character))
            {
                Inventory inventory = character.Inventory;

                if (inventory.CalculateCount(SelectableType.Snowball) > 0)
                {
                    Transform target = character.Type == NpcType.Ally ? _allyModel : _enemyModel;
                    ItemAnimator itemAnimator = target == _allyModel ? _allyItemAnimator : _enemyItemAnimator;
                    _animateCoroutine = StartCoroutine(AnimateItems(character, itemAnimator, target));
                    _animateCoroutines.Add(character, _animateCoroutine);
                }

                if (character.BoostView.Item != null && character.BoostView.Item is Bomb bomb)
                {
                    Transform target = character.Type == NpcType.Ally ? _enemyModel : _allyModel;
                    character.BoostView.Remove(target, bomb.PlayExplosionSound);
                }
            }
        }

        private void OnTriggerExit(Collider other)
        {
            if (other.TryGetComponent(out ICharacter character))
            {
                _animateCoroutines.TryGetValue(character, out Coroutine coroutine);

                if (coroutine != null)
                    StopCoroutine(coroutine);

                DeleteCoroutine(character);
            }
        }

        private IEnumerator AnimateItems(ICharacter character, ItemAnimator itemAnimator, Transform target)
        {
            while (character.Inventory.CalculateCount(SelectableType.Snowball) > 0)
            {
                yield return _delay;
                Snowball snowball = (Snowball)character.Inventory.GetItem(SelectableType.Snowball);
                snowball.Enable();
                snowball.transform.parent = itemAnimator.transform;
                itemAnimator.Animate(snowball, target);
            }

            DeleteCoroutine(character);
        }

        private void DeleteCoroutine(ICharacter character)
        {
            if (_animateCoroutines.ContainsKey(character))
                _animateCoroutines.Remove(character);
        }
    }
}