using System;
using UnityEngine;

public class ModelBuilder : MonoBehaviour
{
    [SerializeField] private Difficulty _difficulty;

    private Transform[] _partsTransform;
    private float _collectedSnow;

    public float TotalNeedSnow { get; private set; }

    public event Action<float> ValueChanged;
    public event Action<ModelBuilder> BuildEnded;

    private void Awake()
    {
        _partsTransform = GetComponentsInChildren<Transform>(includeInactive: true);
        _collectedSnow = 0;
        TotalNeedSnow = _difficulty.SnowPieceValue * _partsTransform.Length - 1;
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.TryGetComponent(out Snowball snowball))
        {
            Build(snowball);
            Destroy(snowball.gameObject);
        }

        if (other.TryGetComponent(out BoostItem bomb))
        {
            Demolish(bomb);
        }
    }

    private void Build(Snowball snowball)
    {
        _collectedSnow = Mathf.Clamp(_collectedSnow + snowball.Weight, 0, TotalNeedSnow);
        ValueChanged?.Invoke(_collectedSnow);

        if (_collectedSnow >= TotalNeedSnow)
            BuildEnded?.Invoke(this);

        UpdateLayers();
    }

    private void Demolish(BoostItem bomb)
    {
        _collectedSnow = Mathf.Clamp(_collectedSnow - bomb.Power, 0, TotalNeedSnow);
        ValueChanged?.Invoke(_collectedSnow);

        UpdateLayers();
    }

    private void UpdateLayers()
    {
        for (int i = 1; i < _partsTransform.Length; i++)
        {
            if (_collectedSnow >= i * _difficulty.SnowPieceValue)
                _partsTransform[i].gameObject.SetActive(true);
            else
                _partsTransform[i].gameObject.SetActive(false);
        }
    }
}