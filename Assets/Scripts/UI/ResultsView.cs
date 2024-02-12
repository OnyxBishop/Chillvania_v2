using Lean.Localization;
using TMPro;
using UnityEngine;

public class ResultsView : MonoBehaviour
{
    [SerializeField] private TMP_Text _result;

    private const string Victory = nameof(Victory);
    private const string Lose = nameof(Lose);

    public void Render(bool isVictory)
    {       
        if (isVictory == true)
        {
            string localizedText = LeanLocalization.GetTranslationText(Victory);
            _result.text = localizedText;
        }

        if (isVictory == false)
        {
            string localizedText = LeanLocalization.GetTranslationText(Lose);
            _result.text = localizedText;
        }
    }
}
