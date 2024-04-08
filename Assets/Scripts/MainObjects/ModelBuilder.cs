using System;
using UnityEngine;
using PlayerPrefs = Agava.YandexGames.Utility.PlayerPrefs;

public class ModelBuilder : MonoBehaviour
{
    [SerializeField] private Difficulty _difficulty;

    private Transform[] _partsTransform;
    private float _collectedSnow;

    private float _snowballsCoeficcent = 7f;
    private bool _isActive = true;

    public event Action<float> ValueChanged;
    public event Action<ModelBuilder> BuildEnded;

    public float TotalNeedSnow { get; private set; }
    public int MaxPartsShow => _partsTransform.Length - 10;

    private void Awake()
    {
        _partsTransform = GetComponentsInChildren<Transform>(includeInactive: true);
        _collectedSnow = 0;
    }

    private void OnTriggerEnter(Collider other)
    {
        if (!_isActive)
        {
            Destroy(other.gameObject);
            return;
        }

        if (other.TryGetComponent(out Snowball snowball))
        {
            Construct(snowball);
            Destroy(snowball.gameObject);
        }

        if (other.TryGetComponent(out BoostItem bomb))
        {
            Demolish(bomb);
        }
    }

    public void Init(float characterStrenght)
    {
        TotalNeedSnow = _difficulty.SnowPieceValue * (_partsTransform.Length - 1)
            + (characterStrenght * _snowballsCoeficcent);

#if UNITY_WEBGL && !UNITY_EDITOR
        TotalNeedSnow += PlayerPrefs.GetInt(PrefsSaveKeys.ModelsCount, 0) * 2;
#endif

        _isActive = true;
    }

    public void StopConstruction()
    {
        _isActive = false;
    }

    private void Construct(Snowball snowball)
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
        if (_isActive == false)
            return;

        for (int i = 1; i < MaxPartsShow; i++)
        {
            if (_collectedSnow >= i * _difficulty.SnowPieceValue)
                _partsTransform[i].gameObject.SetActive(true);
            else
                _partsTransform[i].gameObject.SetActive(false);
        }

        if (_collectedSnow >= TotalNeedSnow)
        {
            for (int i = MaxPartsShow; i < _partsTransform.Length; i++)
            {
                _partsTransform[i].gameObject.SetActive(true);
            }
        }
    }
}