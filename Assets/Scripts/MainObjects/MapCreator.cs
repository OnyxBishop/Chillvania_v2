using UnityEngine;

public class MapCreator : MonoBehaviour
{
    [SerializeField] private Map[] _mapPrefabs;
    [SerializeField] private IntProgress _mapsProgress;

    private int _mapIndex;

    public Map Create()
    {
        _mapIndex = _mapsProgress.CurrentProgress;

        Map map = Instantiate(_mapPrefabs[_mapIndex], null, true);
        map.InitAll();

        _mapsProgress.Add();
        _mapsProgress.Save();

        if (_mapsProgress.CurrentProgress >= _mapPrefabs.Length)
        {
            _mapsProgress.SetDefaultValue();
            _mapsProgress.Save();
        }

        return map;
    }
}