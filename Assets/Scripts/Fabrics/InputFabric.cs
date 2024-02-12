using System;
using UnityEngine;

public class InputFabric : MonoBehaviour
{
    [SerializeField] private JoystickInput _joystickInput;
    [SerializeField] private KeyboardInput _keyboardInput;
    [SerializeField] private Transform _container;

    private IInput _input;

    public IInput Create(DeviceType type)
    {
        if (type == DeviceType.Handheld)
            return _input = Instantiate(_joystickInput, _container);

        if (type == DeviceType.Desktop)
            return _input = Instantiate(_keyboardInput, _container);

        throw new ArgumentNullException();
    }
}