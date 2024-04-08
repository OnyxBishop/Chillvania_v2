using System.Collections;
using UnityEngine;

public class StateRolling : State
{
    private StateMachine _machine;
    private ItemAnimator _itemAnimator;
    private Coroutine _rollingCoroutine;
    private NPC _npc;
    private bool _isRolling;

    public StateRolling(StateMachine machine, NPC bot)
        : base(machine, bot)
    {
        _machine = machine;
        _npc = bot;
        _itemAnimator = _npc.GetComponentInChildren<ItemAnimator>();
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

        if (_npc.Inventory.CalculateCount(SelectableType.Snowball) == _npc.Inventory.Cells.Count)
        {
            _machine.SetState<StateCarryToSnowman>();
            return;
        }

        _machine.SetState<StateChooseTask>();
    }

    private IEnumerator Rolling()
    {
        while (_isRolling == true)
        {
            Vector3 forward = _npc.transform.position +
                _npc.IMovable.CurrentDirection.normalized;

            _npc.IMovable.Move(forward, null);

            yield return null;
        }
    }
}