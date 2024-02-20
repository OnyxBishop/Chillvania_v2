using System.Collections;
using UnityEngine;

public class StateCarryToSnowman : State
{
    private AreaCollector _areaCollector;
    private WaitForSecondsRealtime _delay = new(1f);
    private NPCMachine _coroutineObject;

    public StateCarryToSnowman(StateMachine machine, NPC bot, AreaCollector area, NPCMachine coroutineObject) : base(machine, bot)
    {
        _areaCollector = area;
        _coroutineObject = coroutineObject;
    }

    public override void Enter()
    {
        float randomOffset = Random.Range(0.5f, 2.5f);

        Vector3 point = _areaCollector.Zone.bounds.center;
        point.y = 0f;
        point.x += randomOffset;

        NPC.IMovable.Move(point, ChangeState);
    }

    public override void ChangeState()
    {
        _coroutineObject.StartCoroutine(Wait());
    }

    private IEnumerator Wait()
    {
        NPC.IMovable.Disable();
        yield return _delay;
        NPC.IMovable.Enable();
        Machine.SetState<StateChooseTask>();
    }
}