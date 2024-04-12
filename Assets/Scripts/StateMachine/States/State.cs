using Ram.Chillvania.StateMachine;

public abstract class State
{
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