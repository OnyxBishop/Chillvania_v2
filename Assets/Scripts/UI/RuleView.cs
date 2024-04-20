using System.Collections.Generic;
using Lean.Localization;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace Ram.Chillvania.UI
{
    public class RuleView : MonoBehaviour
    {
        [SerializeField] private LeanLocalization _localization;
        [SerializeField] private List<RuleData> _dataRU;
        [SerializeField] private List<RuleData> _dataENG;
        [SerializeField] private List<RuleData> _dataAR;
        [SerializeField] private RawImage _image;
        [SerializeField] private TMP_Text _description;

        private List<RuleData> _rules;

        public void SetLanguage()
        {
            if (_localization.CurrentLanguage == "Russian")
                _rules = _dataRU;

            if (_localization.CurrentLanguage == "English")
                _rules = _dataENG;

            if (_localization.CurrentLanguage == "Arabic")
                _rules = _dataAR;
        }

        public void Render(ref int index)
        {
            if (index < 0)
                index = _rules.Count - 1;

            if (index >= _rules.Count)
                index = 0;

            _image.texture = _rules[index].Texture;
            _description.text = _rules[index].Description;
        }
    }
}