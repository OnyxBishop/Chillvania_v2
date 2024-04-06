using System;
using System.Collections.Generic;

public class StateMachine
{
    private Dictionary<Type, State> _states = new Dictionary<Type, State>();

    public Action Ended;
    public State CurrentState { get; private set; }

    public void AddState(State state)
    {
        _states.Add(state.GetType(), state);
    }

    public void SetState<T>() where T : State
    {
        Type type = typeof(T);

        if (CurrentState != null && CurrentState.GetType() == type)
            return;

        if (_states.TryGetValue(type, out State newState))
        {
            CurrentState?.Exit();
            CurrentState = newState;
            newState.Enter();
            newState.NeedTransit += OnStateEnded;
        }
    }

    public void Update(float elapsedTime)
    {
        CurrentState?.Update(elapsedTime);        
    }

    private void OnStateEnded(State state)
    {
        state.NeedTransit -= OnStateEnded;
        Ended?.Invoke();
    }
}