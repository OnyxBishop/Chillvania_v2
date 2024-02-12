using UnityEngine;

public class TutorialEntryPoint : MonoBehaviour
{
    [SerializeField] private Character _character;
    [SerializeField] private GameHelper _gameHelper;
    [SerializeField] private InputView _inputView;

    private void Start()
    {
        _gameHelper.enabled = true;
        _inputView.ShowHint();
        _gameHelper.StartTutorial();
        _character.EnableMovement();
    }
}