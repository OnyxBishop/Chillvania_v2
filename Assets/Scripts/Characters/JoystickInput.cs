using UnityEngine;

public class JoystickInput : MonoBehaviour, IInput
{
    [SerializeField] private Joystick _joystick;

    private Movement _movement;
    private Vector3 _direction;

    public bool Moving => _joystick.Direction != Vector2.zero;

    private void Awake()
    {
        Input.multiTouchEnabled = false;
    }

    private void OnDisable()
    {
        _movement?.Disable();
    }

    private void Update()
    {
        GetDirection();
    }

    public void FixedUpdate()
    {
        if (!Moving)
        {
            _movement.Disable();
            return;
        }

        _movement.Move(_direction);
    }

    public void GetDirection()
    {
        _direction = new Vector3(_joystick.Direction.x, 0, _joystick.Direction.y);
    }

    public void ChainWithCharacter(Character character)
    {
        _movement = (Movement)character.IMovable;
    }

    public void Enable()
    {
        gameObject.SetActive(true);
    }

    public void Disable()
    {
        gameObject.SetActive(false);
    }
}
