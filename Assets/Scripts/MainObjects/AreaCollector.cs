using System.Collections;
using UnityEngine;

public class AreaCollector : MonoBehaviour
{
    [SerializeField] private ItemAnimator _allyItemAnimator;
    [SerializeField] private ItemAnimator _enemyItemAnimator;
    [SerializeField] private SnowballFabric _fabric;

    private Transform _allyModel;
    private Transform _enemyModel;

    private Coroutine _animateCoroutine;
    private WaitForSeconds _delay = new(0.3f);

    public Collider Zone {  get; private set; }

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
        if (_animateCoroutine != null)
            StopCoroutine(_animateCoroutine);
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
    }
}