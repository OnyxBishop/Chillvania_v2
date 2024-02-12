using System;
using System.Collections;
using UnityEngine;

public class ItemAnimator : MonoBehaviour
{
    [SerializeField] private Transform _bezierPoint;

    private Transform _finishPoint;

    private Action _onFinishedCallback;

    public event Action AnimationEnded;
    public event Action AnimationStarted;

    public void Animate(ISelectable selectable, Transform target)
    {
        _finishPoint = target;

        AnimationStarted?.Invoke();

        if (selectable is Snowball snowball)
            StartCoroutine(BezierAnimate(snowball.transform));
    }

    public void SetCallback(Action callback)
    {
        _onFinishedCallback = callback;
    }

    private IEnumerator BezierAnimate(Transform itemTransform)
    {
        if (_finishPoint == null)
            throw new NotImplementedException();

        float time = 0;
        Vector3 startPosition = itemTransform.position;

        while (time <= 1f)
        {
            if (itemTransform == null)
            {
                break;
            }

            time += Time.deltaTime;
            itemTransform.position = GetPoint(startPosition, time);

            yield return null;
        }

        AnimationEnded?.Invoke();
        _onFinishedCallback?.Invoke();
    }

    private Vector3 GetPoint(Vector3 startPosition, float t)
    {
        float oneMinusT = 1f - t;

        float x = oneMinusT * oneMinusT * startPosition.x + 2f * oneMinusT * t * _bezierPoint.position.x + t * t * _finishPoint.position.x;
        float y = oneMinusT * oneMinusT * startPosition.y + 2f * oneMinusT * t * _bezierPoint.position.y + t * t * _finishPoint.position.y;
        float z = oneMinusT * oneMinusT * startPosition.z + 2f * oneMinusT * t * _bezierPoint.position.z + t * t * _finishPoint.position.z;

        return new Vector3(x, y, z);
    }
}

