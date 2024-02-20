public class StateChooseTask : State
{
    private BoostItemsSpawner _boostSpawner;
    private float _boostOffset = 15f;

    public StateChooseTask(StateMachine machine, NPC bot, BoostItemsSpawner boostSpawner) : base(machine, bot)
    {
        _boostSpawner = boostSpawner;
    }

    public override void Enter()
    {
        if (NPC.Inventory.CalculateCount(SelectableType.Snowball) == NPC.Inventory.Cells.Count)
        {
            Machine.SetState<StateCarryToSnowman>();
            return;
        }

        //if (_boostSpawner.HasBoost && NPC.BoostView.Item == null &&
        //    _boostSpawner.GetDistanceToClosestItem(NPC, out _) <= _boostOffset)
        //{
        //    Machine.SetState<StateReachBoost>();
        //    return;
        //}       


        Machine.SetState<StateReachSnowball>();
    }
}