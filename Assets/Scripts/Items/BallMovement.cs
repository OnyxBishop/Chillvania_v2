using System;
using System.Collections;
using UnityEngine;

public class BallMovement : MonoBehaviour
{
    [SerializeField] private AnimationCurve _rotationCurve;
    [SerializeField] private float _rotationInDeg;
    [SerializeField] private float _scaleSpeed;

    private float _weight;
    private Vector3 _endScale;
    private float _rotationTime;
    private Coroutine _coroutine;

    private readonly float _rollingValue = 100;
    private readonly float _coefficient = 10;

    public float RollingDuration { get; private set; }
    public event Action<float> MaxWeightReached;

    public void Move(ICharacter character)
    {
        if (_coroutine != null)
            StopCoroutine(_coroutine);

        float characterStats = character.IMovable.Speed * character.Interaction.Strenght;

        RollingDuration = _rollingValue / (characterStats * _coefficient);
        _coroutine = StartCoroutine(Rolling(character));
    }

    private IEnumerator Rolling(ICharacter character)
    {
        WaitUntil waitUntil = new(() => character.IMovable.IsMoving);
        float elapsedTime = 0f;

        float rotationAmount;
        float scaleAmount;

        Vector3 rotationAxis;

        while (elapsedTime < RollingDuration)
        {
            _rotationTime += Time.deltaTime;
            rotationAmount = _rotationCurve.Evaluate(Mathf.Clamp01(_rotationTime)) * _rotationInDeg;
            rotationAxis = Vector3.right;
            transform.Rotate(rotationAxis, rotationAmount * Time.deltaTime);

            scaleAmount = _rotationCurve.Evaluate(Mathf.Clamp01(1 - _rotationTime))
                * _scaleSpeed * character.Interaction.Strenght;
            _endScale = transform.localScale + (scaleAmount * Time.deltaTime * Vector3.one);
            transform.localScale = Vector3.Lerp(transform.localScale, _endScale, Time.deltaTime);

            if (_rotationTime >= 1f)
                _rotationTime = 0f;

            elapsedTime += Time.deltaTime;

            yield return waitUntil;
        }

        _weight = character.Interaction.Strenght;
        MaxWeightReached?.Invoke(_weight);
    }
}