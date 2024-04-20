using Ram.Chillvania.Characters.NPC;
using Ram.Chillvania.Items;

namespace Ram.Chillvania.StatesMachine.States
{
    public class StateChooseTask : State
    {
        private StateMachine _machine;
        private NPC _npc;

        public StateChooseTask(StateMachine machine, NPC bot)
        {
            _machine = machine;
            _npc = bot;
        }

        public override void Enter()
        {
            if (_npc.Inventory.CalculateCount(SelectableType.Snowball) == _npc.Inventory.Cells.Count)
            {
                _machine.SetState<StateCarryToSnowman>();
                return;
            }

            _machine.SetState<StateReachSnowball>();
        }
    }
}