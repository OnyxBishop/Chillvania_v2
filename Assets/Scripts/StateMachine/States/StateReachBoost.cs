public class StateReachBoost : State
{
    private BoostItemsSpawner _boostSpawner;
    private BoostItem _item;

    public StateReachBoost(StateMachine machine, NPC bot, BoostItemsSpawner boostSpawner) : base(machine, bot)
    {
        _boostSpawner = boostSpawner;
    }

    public override void Enter()
    {
        _boostSpawner.GetDistanceToClosestItem(NPC, out _item);

        if (_item.IsOccupied == false && _item != null)
        {
            _item.Taken += OnItemTaken;
            NPC.IMovable.Move(_item.transform.position, null);
            NPC.BoostView.SetCallback(ChangeState);
        }
    }

    public override void ChangeState()
    {
        Machine.SetState<StateChooseTask>();
    }

    private void OnItemTaken(BoostItem item)
    {
        if (item.Equals(_item) == false)
        {
            ChangeState();
            return;
        }

        item.Taken -= OnItemTaken;
        ChangeState();
    }
}
