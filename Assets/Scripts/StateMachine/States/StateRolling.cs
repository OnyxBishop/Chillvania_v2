using System.Collections;
using UnityEngine;

public class StateRolling : State
{
    private ItemAnimator _itemAnimator;
    private Coroutine _rollingCoroutine;
    private bool _isRolling;

    public StateRolling(StateMachine machine, NPC bot) : base(machine, bot)
    {
        _itemAnimator = NPC.GetComponentInChildren<ItemAnimator>();
    }

    public override void Enter()
    {
        _itemAnimator.SetCallback(ChangeState);
        _isRolling = true;
        _rollingCoroutine = _itemAnimator.StartCoroutine(Rolling());
    }

    public override void ChangeState()
    {
        _isRolling = false;

        if (_rollingCoroutine != null)
            _itemAnimator.StopCoroutine(_rollingCoroutine);

        if (NPC.Inventory.CalculateCount(SelectableType.Snowball) == NPC.Inventory.Cells.Count)
        {
            Machine.SetState<StateCarryToSnowman>();
            return;
        }

        Machine.SetState<StateChooseTask>();
    }

    private IEnumerator Rolling()
    {
        float elapsedTime = 0;

        while (_isRolling == true)
        {
            elapsedTime += Time.deltaTime;

            Vector3 forward = NPC.transform.position +
                NPC.IMovable.CurrentDirection.normalized;

            NPC.IMovable.Move(forward, null);

            yield return null;
        }
    }
}