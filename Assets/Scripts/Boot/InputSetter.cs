using System;
using UnityEngine;

[RequireComponent(typeof(InputFabric))]
public class InputSetter : MonoBehaviour
{
    private InputFabric _inputFabric;
    private IInput _input;

    public IInput Input => _input;

    public void Set(Character character)
    {
        _inputFabric = GetComponent<InputFabric>();

        if (DeviceDetector.IsMobile == true)
            _input = _inputFabric.Create(DeviceType.Handheld);
        else
            _input = _inputFabric.Create(DeviceType.Desktop);

        _input.ChainWithCharacter(character);
    }

    public void Enable()
    {
        _input.Enable();
    }

    public void Disable()
    {
        _input.Disable();
    }
}