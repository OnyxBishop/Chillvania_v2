using System;
using UnityEngine;

public class InputFabric : MonoBehaviour
{
    [SerializeField] private JoystickInput _joystickInput;
    [SerializeField] private KeyboardInput _keyboardInput;
    [SerializeField] private Transform _container;

    public IInput Create(DeviceType type)
    {
        if (type == DeviceType.Handheld)
            return Instantiate(_joystickInput, _container);

        if (type == DeviceType.Desktop)
            return Instantiate(_keyboardInput, _container);

        throw new ArgumentNullException();
    }
}