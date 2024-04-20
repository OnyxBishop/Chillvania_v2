using Ram.Chillvania.Shop;
using UnityEngine;

namespace Ram.Chillvania.Characters
{
    public class SkinPlacement : MonoBehaviour
    {
        [SerializeField] private SkinFabric _skinFabric;

        private GameObject _current;

        public void InstantiateModel(GameObject item)
        {
            if (_current != null)
                Destroy(_current);

            _current = Instantiate(item, transform);
        }

        public void CreateSkin(SkinsType type)
        {
            _current = _skinFabric.Create(type, transform);
        }
    }
}