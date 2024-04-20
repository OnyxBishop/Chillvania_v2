using UnityEngine;

namespace Ram.Chillvania.Characters
{
    public class InputEnableSwitcher : MonoBehaviour
    {
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