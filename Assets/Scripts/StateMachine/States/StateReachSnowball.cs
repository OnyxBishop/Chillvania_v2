public class StateReachSnowball : State
{
    private StateMachine _machine;
    private SnowballSpawner _snowballSpawner;
    private Snowball _target;
    private NPC _npc;

    public StateReachSnowball(StateMachine machine, NPC npc, SnowballSpawner spawner)
        : base(machine, npc)
    {
        _machine = machine;
        _snowballSpawner = spawner;
        _npc = npc;
    }

    public override void Enter()
    {
        _target = _snowballSpawner.GetClosestSnowball(_npc);
        _target.InteractStarting += OnTargetInteracted;
        _npc.IMovable.Move(_target.transform.position, ChangeState);
    }

    public override void ChangeState()
    {
        _machine.SetState<StateRolling>();
    }

    private void OnTargetInteracted(Snowball snowball)
    {
        if ((Snowball)_npc.Interaction.CurrentItem == snowball)
        {
            snowball.InteractStarting -= OnTargetInteracted;
            ChangeState();
        }
        else
        {
            _machine.SetState<StateChooseTask>();
        }
    }
}