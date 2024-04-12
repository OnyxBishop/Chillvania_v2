using Ram.Chillvania.Model;
using UnityEngine;

public class TutorialEntryPoint : MonoBehaviour
{
    [SerializeField] private TutorialHints _gameHelper;
    [SerializeField] private PlayerFabric _playerFabric;
    [SerializeField] private InputSetter _inputSetter;
    [SerializeField] private InputView _inputView;
    [SerializeField] private Transform _spawnPoint;

    private Character _character;

    private void Start()
    {
        _character = _playerFabric.Create();
        _character.transform.SetPositionAndRotation(_spawnPoint.position, _spawnPoint.localRotation);
        _inputSetter.Set(_character);
        _character.EnableMovement();
        _inputView.Init(_inputSetter);
        _inputView.ShowHint();

        _gameHelper.enabled = true;
        _gameHelper.StartTutorial(_character);
    }
}