using Cinemachine;
using UnityEngine;

public class CameraSwitcher : MonoBehaviour
{
    [SerializeField] private CinemachineVirtualCamera _followCamera;
    [SerializeField] private CinemachineVirtualCamera _endGameCamera;
    [SerializeField] private CinemachineDollyCart _cart;
    [SerializeField] private Animator _animator;

    public void FollowToCharacter(Character character)
    {
        _followCamera.Follow = character.transform;
        _animator.SetTrigger(CameraAnimatorParams.ShowPlayer);
    }

    public void LookToModel(Transform lookObject)
    {
        _endGameCamera.LookAt = lookObject;
        _animator.SetTrigger(CameraAnimatorParams.ShowEndGame);
        _cart.enabled = true;
    }
}