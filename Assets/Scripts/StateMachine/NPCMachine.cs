using UnityEngine;

public class NPCMachine : MonoBehaviour
{
    private StateMachine _machine;
    private NPC _bot;
    private SnowballSpawner _spawner;
    private BoostItemsSpawner _boostSpawner;
    private AreaCollector _collectArea;

    public void Init(SnowballSpawner spawner, BoostItemsSpawner boostSpawner, AreaCollector collectArea)
    {
        _spawner = spawner;
        _boostSpawner = boostSpawner;
        _collectArea = collectArea;
    }

    private void Start()
    {
        _machine = new StateMachine();
        _bot = GetComponent<NPC>();

        _machine.AddState(new StateEntry(_machine, _bot));
        _machine.AddState(new StateReachSnowball(_machine, _bot, _spawner));
        _machine.AddState(new StateRolling(_machine, _bot));
        _machine.AddState(new StateChooseTask(_machine, _bot, _boostSpawner));
        _machine.AddState(new StateCarryToSnowman(_machine, _bot, _collectArea, this));
        //_machine.AddState(new StateReachBoost(_machine, _bot, _boostSpawner));

        _machine.SetState<StateEntry>();
    }

    private void Update()
    {
        _machine.Update(Time.deltaTime);
    }
}