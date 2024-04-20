using Ram.Chillvania.Characters;
using UnityEngine;
using UnityEngine.SceneManagement;

namespace Ram.Chillvania.GameHints
{
    public class Teleport : MonoBehaviour
    {
        private const string GameplayEntryPoint = nameof(GameplayEntryPoint);
        private float _elapsedTime = 0f;
        private float _delay = 2f;

        private void OnTriggerStay(Collider other)
        {
            if (other.TryGetComponent(out Character character))
            {
                _elapsedTime += Time.deltaTime;

                if (_elapsedTime >= _delay)
                    SceneManager.LoadScene(GameplayEntryPoint);
            }
        }
    }
}