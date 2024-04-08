using System.Collections;
using UnityEngine;

public class StateCarryToSnowman : State
{
    private StateMachine _machine;
    private AreaCollector _areaCollector;
    private WaitForSecondsRealtime _delay = new (1f);
    private NPCMachine _coroutineObject;
    private NPC _npc;

    public StateCarryToSnowman(StateMachine machine, NPC bot, AreaCollector area, NPCMachine coroutineObject) 
        : base(machine, bot)
    {
        _machine = machine;
        _areaCollector = area;
        _coroutineObject = coroutineObject;
        _npc = bot;
    }

    public override void Enter()
    {
        float randomOffset = Random.Range(-1f, 1f);

        Vector3 point = _areaCollector.Zone.bounds.center;
        point.y = 0f;
        point.x += randomOffset;

        _npc.IMovable.Move(point, ChangeState);
    }

    public override void ChangeState()
    {
        _coroutineObject.StartCoroutine(Wait());
    }

    private IEnumerator Wait()
    {
        _npc.IMovable.Disable();
        yield return _delay;
        _npc.IMovable.Enable();
        _machine.SetState<StateChooseTask>();
    }
}