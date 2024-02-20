using UnityEngine;

public class StateReachBoost : State
{
    private BoostItemsSpawner _boostSpawner;
    private Collider _interactionCollider;
    private BoostItem _item;

    public StateReachBoost(StateMachine machine, NPC bot, BoostItemsSpawner boostSpawner) : base(machine, bot)
    {
        _boostSpawner = boostSpawner;
        _interactionCollider = NPC.Interaction.Collider;
    }

    public override void Enter()
    {
        _interactionCollider.enabled = false;

        _boostSpawner.GetDistanceToClosestItem(NPC, out _item);
        _item.Taken += OnItemTaken;

        Vector3 point = _item.transform.position;
        point.y = 0;

        NPC.IMovable.Move(point, ChangeState);
    }

    public override void ChangeState()
    {
        _interactionCollider.enabled = true;
        Machine.SetState<StateChooseTask>();
    }

    private void OnItemTaken(BoostItem item)
    {
        if (NPC.BoostView.Item == item)
        {
            item.Taken -= OnItemTaken;
            ChangeState();
        }
        else
        {
            Machine.SetState<StateChooseTask>();
        }
    }
}
