using Ram.Chillvania.Common;
using UnityEngine;

namespace Ram.Chillvania.MainObjects
{
    public class MapCreator : MonoBehaviour
    {
        [SerializeField] private Map[] _mapPrefabs;

        private int _mapIndex;

        public Map Create(float characterStrenght)
        {
            _mapIndex = PlayerPrefs.GetInt(PrefsSaveKeys.MapIndex, 0);

            Map map = Instantiate(_mapPrefabs[_mapIndex], null, true);
            map.InitAll(characterStrenght);

            _mapIndex++;

            if (_mapIndex >= _mapPrefabs.Length)
            {
                _mapIndex = 0;
                PlayerPrefs.SetInt(PrefsSaveKeys.MapIndex, _mapIndex);
                PlayerPrefs.Save();
            }

            PlayerPrefs.SetInt(PrefsSaveKeys.MapIndex, _mapIndex);
            PlayerPrefs.Save();

            return map;
        }
    }
}