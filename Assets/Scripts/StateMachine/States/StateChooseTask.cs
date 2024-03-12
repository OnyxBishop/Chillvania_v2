public class StateChooseTask : State
{
    public StateChooseTask(StateMachine machine, NPC bot) : base(machine, bot)
    {
    }

    public override void Enter()
    {
        if (NPC.Inventory.CalculateCount(SelectableType.Snowball) == NPC.Inventory.Cells.Count)
        {
            Machine.SetState<StateCarryToSnowman>();
            return;
        }

        Machine.SetState<StateReachSnowball>();
    }
}