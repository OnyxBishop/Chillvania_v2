public abstract class State
{
    private readonly StateMachine _machine;
    private readonly NPC _npc;

    public State(StateMachine machine, NPC bot)
    {
        _machine = machine;
        _npc = bot;
    }

    public virtual void Enter()
    {

    }

    public virtual void Exit()
    {

    }

    public virtual void Update(float elapsedTime)
    {

    }

    public virtual void ChangeState()
    {

    }
}