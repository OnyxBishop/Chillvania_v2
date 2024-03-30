using UnityEngine;
using UnityEngine.UI;
using Lean.Localization;
using TMPro;

public class ResultsView : MonoBehaviour
{
    [SerializeField] private Image _image;
    [SerializeField] private Sprite _victorySprite;
    [SerializeField] private Sprite _loseSprite;
    [SerializeField] private TMP_Text _text;
    [SerializeField] private TMP_Text _coinsCount;

    private const string Victory = nameof(Victory);
    private const string Lose = nameof(Lose);

    public void Render(bool isVictory, int coinsCount)
    {
        if (isVictory)
        {
            _image.sprite = _victorySprite;
            _text.text = LeanLocalization.GetTranslationText(Victory);
        }

        if (!isVictory)
        {
            _text.text = LeanLocalization.GetTranslationText(Lose);
            _image.sprite = _loseSprite;
        }

        _coinsCount.text = string.Format($"+{coinsCount}");
    }
}