using UnityEngine;

namespace Ram.Chillvania.ScriptableObjects
{
    [CreateAssetMenu(fileName = "RuleCardInfo", menuName = "Rules")]
    public class RuleData : ScriptableObject
    {
        [SerializeField] private Texture _texture;
        [SerializeField] private string _description;

        public Texture Texture => _texture;
        public string Description => _description;
    }
}