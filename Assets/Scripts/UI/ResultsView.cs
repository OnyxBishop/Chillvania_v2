using Lean.Localization;
using TMPro;
using UnityEngine;

public class ResultsView : MonoBehaviour
{
    [SerializeField] private TMP_Text _victoryWord;
    [SerializeField] private TMP_Text _coinsCount;

    private const string Victory = nameof(Victory);
    private const string Lose = nameof(Lose);

    public void Render(bool isVictory, int coinsCount = 0)
    {
        if (isVictory == true)
        {
            string localizedText = LeanLocalization.GetTranslationText(Victory);
            _victoryWord.text = localizedText;
        }

        if (isVictory == false)
        {
            string localizedText = LeanLocalization.GetTranslationText(Lose);
            _victoryWord.text = localizedText;
        }

        _coinsCount.text = coinsCount.ToString();
    }
}
