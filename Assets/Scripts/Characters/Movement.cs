using System;
using System.Collections;
using UnityEngine;

[RequireComponent(typeof(Rigidbody))]
public class Movement : MonoBehaviour, IMovable, IUpgradeable
{
    [SerializeField] private Transform _playerModel;
    [SerializeField] private AudioSource _audio;

    private Animator _animator;
    private Rigidbody _rigidbody;
    private Coroutine _upgradeCoroutine;

    private float _initialSpeed;
    private float _currentSpeed;
    private float _rotationSpeed = 6.5f;

    public event Action<float> Upgraded;

    public bool IsMoving { get; private set; }
    public Vector3 CurrentDirection { get; private set; }

    public float Speed => _currentSpeed;

    public void Init(float speed)
    {
        _initialSpeed = speed;
        _currentSpeed = _initialSpeed;
    }

    private void Awake()
    {
        _rigidbody = GetComponent<Rigidbody>();
        _animator = GetComponentInChildren<Animator>();
    }

    public void Move(Vector3 direction, Action callback = null)
    {
        Quaternion lookRotation = Quaternion.LookRotation(direction);
        _playerModel.rotation = Quaternion.Slerp(_playerModel.rotation, lookRotation, _rotationSpeed * Time.deltaTime);
        _rigidbody.velocity = direction * _currentSpeed;

        IsMoving = true;
        _animator.SetFloat(CharacterAnimatorData.Params.IsRunning, direction.magnitude);
        CurrentDirection = direction;
    }

    public void Enable()
    {
        _rigidbody.isKinematic = false;
    }

    public void Disable()
    {
        if (_rigidbody != null)
        {
            _rigidbody.velocity = Vector3.zero;
            _animator.SetFloat(CharacterAnimatorData.Params.IsRunning, 0);
        }

        IsMoving = false;
    }

    public void Upgrade(float value)
    {
        if (_upgradeCoroutine != null)
            StopCoroutine(_upgradeCoroutine);

        _upgradeCoroutine = StartCoroutine(TemporaryUpgrade(value));
    }

    public void OnMove()
    {
        _audio.Play();
    }

    private IEnumerator TemporaryUpgrade(float value)
    {
        WaitForSeconds wait = new (5f);

        _currentSpeed += value;

        yield return wait;

        _currentSpeed = _initialSpeed;
    }
}