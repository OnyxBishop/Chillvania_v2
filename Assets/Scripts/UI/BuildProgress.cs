using TMPro;
using UnityEngine;

namespace Ram.Chillvania.UI.Common
{
    public class BuildProgress : MonoBehaviour
    {
        [SerializeField] private TMP_Text _progress;

        private ModelBuilder _model;

        public void Init(ModelBuilder model)
        {
            _progress.text = 0.ToString();
            _model = model;
        }

        private void OnEnable()
        {
            _model.ValueChanged += OnValueChanged;
        }

        private void OnDisable()
        {
            _model.ValueChanged -= OnValueChanged;
        }

        private void OnValueChanged(float value)
        {
            _progress.text = value.ToString();
        }
    }
}