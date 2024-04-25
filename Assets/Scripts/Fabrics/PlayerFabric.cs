using Ram.Chillvania.Boot;
using Ram.Chillvania.Characters;
using UnityEngine;

namespace Ram.Chillvania.Fabrics
{
    public class PlayerFabric : MonoBehaviour
    {
        [SerializeField] private Character _characterPrefab;

        private IPersistentData _persistentData;
        private JsonSaver _jsonSaver;

        public Character Create()
        {
            InitData();

            Character character = Instantiate(_characterPrefab);
            character.SetConfiguration(_persistentData);

            return character;
        }

        private void InitData()
        {
            _persistentData = new PersistentData();
            _jsonSaver = new JsonSaver(_persistentData);
            _jsonSaver.Load();
        }
    }
}