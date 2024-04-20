namespace Ram.Chillvania.StatesMachine.States
{
    public class StateEntry : State
    {
        private StateMachine _machine;
        private float _delay = 2.5f;

        public StateEntry(StateMachine machine)
        {
            _machine = machine;
        }

        public override void Update(float elapsedTime)
        {
            _delay -= elapsedTime;

            if (_delay <= 0)
                _machine.SetState<StateReachSnowball>();
        }
    }
}