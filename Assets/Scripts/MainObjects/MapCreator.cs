using UnityEngine;

public class MapCreator : MonoBehaviour
{
    [SerializeField] private Map[] _mapPrefab;

    public static MapCreator Instance;
    private int _mapIndex = 0;

    private void Awake()
    {
        if (Instance == null)
        {
            Instance = this;
            DontDestroyOnLoad(gameObject);
        }
        else
        {
            Destroy(gameObject);
        }
    }

    public Map Create()
    {
        Map map = Instantiate(_mapPrefab[_mapIndex], null, true);
        map.InitAll();

        _mapIndex++;

        if (_mapIndex >= _mapPrefab.Length)
            _mapIndex = 0;

        return map;
    }
}