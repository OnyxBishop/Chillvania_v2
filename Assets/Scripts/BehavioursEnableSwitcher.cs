using UnityEngine;

public class BehavioursEnableSwitcher : MonoBehaviour
{
    [SerializeField] private UIEnableSwitcher _ui;
    [SerializeField] private NPCSpawner _spawner;

    private Character _mainCharacter;

    public void Init(Character character)
    {
        _mainCharacter = character;
    }

    public void Enable()
    {
        _mainCharacter.EnableMovement();
        _ui.Enable(_mainCharacter);
    }

    public void Disable()
    {
        _mainCharacter.DisableMovement();
        _ui.Disable();
        _spawner.DisableAllNPCMovement();
    }
}
