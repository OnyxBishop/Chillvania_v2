using System;
using System.Collections.Generic;
using Ram.Chillvania.StatesMachine.States;

namespace Ram.Chillvania.StatesMachine
{
    public class StateMachine
    {
        private Dictionary<Type, State> _states = new Dictionary<Type, State>();

        public State CurrentState { get; private set; }

        public void AddState(State state)
        {
            _states.Add(state.GetType(), state);
        }

        public void SetState<T>()
            where T : State
        {
            Type type = typeof(T);

            if (CurrentState != null && CurrentState.GetType() == type)
                return;

            if (_states.TryGetValue(type, out State newState))
            {
                CurrentState?.Exit();
                CurrentState = newState;
                newState.Enter();
            }
        }

        public void Update(float elapsedTime)
        {
            CurrentState?.Update(elapsedTime);
        }
    }
}