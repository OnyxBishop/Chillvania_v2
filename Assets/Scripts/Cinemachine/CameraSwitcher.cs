using Cinemachine;
using UnityEngine;

public class CameraSwitcher : MonoBehaviour
{
    [SerializeField] private CinemachineVirtualCamera _followCamera;
    [SerializeField] private CinemachineVirtualCamera _endGameCamera;
    [SerializeField] private Animator _animator;

    private CinemachineDollyCart _cart;

    public void InitDollyCart(CinemachineSmoothPath path = null)
    {
        if (path == null)
        {
            _cart = null;
            return;
        }

        _endGameCamera.TryGetComponent(out _cart);

        if (_cart == null)
            throw new System.NullReferenceException("no reference to Dolly Cart");

        _cart.m_Path = path;
    }

    public void FollowToCharacter(Character character)
    {
        _followCamera.Follow = character.transform;
        _animator.SetTrigger(CameraAnimatorParams.ShowPlayer);
    }

    public void LookToModel(Transform lookObject)
    {
        _endGameCamera.LookAt = lookObject;
        _animator.SetTrigger(CameraAnimatorParams.ShowEndGame);

        if (_cart != null)
            _cart.enabled = true;
    }

    public void ResetDollyCart()
    {
        _cart.m_Path = null;
        _cart.enabled = false;
    }
}