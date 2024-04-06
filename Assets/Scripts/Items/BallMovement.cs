using System;
using System.Collections;
using UnityEngine;

public class BallMovement : MonoBehaviour
{    
    [SerializeField] private AnimationCurve _rotationCurve;
    [SerializeField] private float _rotationInDeg;

    private readonly float _rollingValue = 100;
    private readonly float _coefficient = 11;

    private float _weight;
    private float _rotationTime;
    private Coroutine _coroutine;
   
    public event Action<float> MaxWeightReached;
    public float RollingDuration { get; private set; }

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
        float rollingCoefficent = Mathf.Lerp(40, 1, RollingDuration);

        Vector3 increaseScale = new Vector3(0.2f, 0.2f, 0.2f);

        while (elapsedTime < RollingDuration)
        {
            _rotationTime += Time.deltaTime;
            rotationAmount = _rotationCurve.Evaluate(Mathf.Clamp01(_rotationTime)) * _rotationInDeg;
            transform.Rotate(Vector3.right, rotationAmount * Time.deltaTime);

            transform.localScale += increaseScale * rollingCoefficent * Mathf.Min(Time.deltaTime, 0.05f);

            if (_rotationTime >= 1f)
                _rotationTime = 0f;

            elapsedTime += Time.deltaTime;

            yield return waitUntil;
        }

        _weight = character.Interaction.Strenght;
        MaxWeightReached?.Invoke(_weight);
    }
}