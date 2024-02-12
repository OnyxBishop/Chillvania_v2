using UnityEngine;
using UnityEngine.AI;
using System.Collections;
using System;

public class NPCMovement : MonoBehaviour, IMovable
{
    private NavMeshAgent _agent;
    private Animator _animator;
    private float _minValueToRotation = 0.1f;

    private float _initialSpeed;

    public float Speed => _agent.speed;
    public bool IsMoving { get; private set; } = true;
    public Vector3 CurrentDirection { get; private set; }

    public void Init(int speed)
    {
        _initialSpeed = speed;
        _agent.speed = _initialSpeed;
    }

    private void Awake()
    {
        _agent = GetComponent<NavMeshAgent>();
        _animator = GetComponent<Animator>();
    }

    public void Move(Vector3 destination, Action callback = null)
    {
        if (IsMoving)
        {
            _agent.ResetPath();
            _agent.SetDestination(destination);

            if (_agent.velocity.magnitude > _minValueToRotation)
            {
                Quaternion lookRotation = Quaternion.LookRotation(_agent.velocity.normalized, Vector3.up);

                transform.rotation = Quaternion.Lerp(transform.rotation, lookRotation, Time.deltaTime * _agent.angularSpeed);
            }

            _animator.SetFloat(CharacterAnimatorData.Params.IsRunning, destination.normalized.magnitude);
            CurrentDirection = destination - transform.position;

            StartCoroutine(CheckingPathPanding(callback));
        }
    }

    public void Enable()
    {
        IsMoving = true;
    }

    public void Disable()
    {
        _agent.ResetPath();
        _animator.SetFloat(CharacterAnimatorData.Params.IsRunning, 0);
        IsMoving = false;
    }

    public void Upgrade(float value)
    {
        StartCoroutine(TemporaryUpgrade(value));
    }

    private IEnumerator TemporaryUpgrade(float value)
    {
        WaitForSeconds wait = new(5f);

        _agent.speed += value;

        yield return wait;

        _agent.speed = _initialSpeed;
    }

    private IEnumerator CheckingPathPanding(Action callback)
    {
        yield return null;

        while (_agent.hasPath || _agent.pathPending)
        {
            yield return null;
        }

        callback?.Invoke();
    }
}
