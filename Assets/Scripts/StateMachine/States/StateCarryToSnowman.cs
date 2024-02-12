using System.Collections;
using UnityEngine;

public class StateCarryToSnowman : State
{
    private AreaCollector _areaCollector;
    private WaitForSecondsRealtime _delay = new(1f);

    public StateCarryToSnowman(StateMachine machine, NPC bot, AreaCollector area) : base(machine, bot)
    {
        _areaCollector = area;
    }

    public override void Enter()
    {
        NPC.IMovable.Move(_areaCollector.Zone.bounds.center, ChangeState);
    }

    public override void ChangeState()
    {
        _areaCollector.StartCoroutine(Wait());
    }

    private IEnumerator Wait()
    {
        NPC.IMovable.Disable();
        yield return _delay;
        NPC.IMovable.Enable();
        Machine.SetState<StateChooseTask>();
    }
}