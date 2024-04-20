using UnityEngine;

namespace Ram.Chillvania.Characters
{
    public class KeyboardInput : MonoBehaviour, IInput
    {
        private Movement _movement;
        private Vector3 _direction;

        public bool HasDirection => _direction != Vector3.zero;

        private void OnDisable()
        {
            _movement?.Disable();
        }

        private void Update()
        {
            GetDirection();
        }

        private void FixedUpdate()
        {
            if (!HasDirection)
            {
                _movement.Disable();
                return;
            }

            _movement.Move(_direction);
        }

        public void GetDirection()
        {
            float x = (Input.GetKey(KeyCode.D) ? 1 : 0) - (Input.GetKey(KeyCode.A) ? 1 : 0);
            float z = (Input.GetKey(KeyCode.W) ? 1 : 0) - (Input.GetKey(KeyCode.S) ? 1 : 0);

            _direction = new Vector3(x, 0, z).normalized;
        }

        public void ChainWithCharacter(Character character)
        {
            _movement = (Movement)character.IMovable;
        }

        public void Enable()
        {
            gameObject.SetActive(true);
        }

        public void Disable()
        {
            gameObject.SetActive(false);
        }
    }
}