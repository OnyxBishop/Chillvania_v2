public class StateReachSnowball : State
{
    private SnowballSpawner _snowballSpawner;
    private Snowball _target;

    public StateReachSnowball(StateMachine machine, NPC npc, SnowballSpawner spawner) : base(machine, npc)
    {
        _snowballSpawner = spawner;
    }

    public override void Enter()
    { 
        _target = _snowballSpawner.GetClosestSnowball(NPC);
        _target.InteractStarting += OnTargetInteracted;
        NPC.IMovable.Move(_target.transform.position, ChangeState);
    }

    public override void ChangeState()
    {
        Machine.SetState<StateRolling>();
    }

    private void OnTargetInteracted(Snowball snowball)
    {
        if ((Snowball)NPC.Interaction.CurrentItem == snowball)
        {
            snowball.InteractStarting -= OnTargetInteracted;
            ChangeState();
        }
        else
        {
            Machine.SetState<StateChooseTask>();
        }
    }
}