public class StateEntry : State
{
    private float _delay = 2.5f;

    public StateEntry(StateMachine machine, NPC npc) : base(machine, npc) { }

    public override void Update(float elapsedTime)
    {
        _delay -= elapsedTime;

        if (_delay <= 0)
        {
            Machine.SetState<StateReachSnowball>();
        }
    }
}