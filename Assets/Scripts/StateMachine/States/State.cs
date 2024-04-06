using System;

public abstract class State
{
    protected readonly StateMachine Machine;
    protected readonly NPC NPC;

    public Action<State> NeedTransit;

    public State(StateMachine machine, NPC bot)
    {
        Machine = machine;
        NPC = bot;
    }

    public virtual void Enter() { }

    public virtual void Exit() { }

    public virtual void Update(float elapsedTime) { }

    public virtual void ChangeState() { }

    public void InvokeEnded() { NeedTransit?.Invoke(this); }
}
