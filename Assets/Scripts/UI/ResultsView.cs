using Lean.Localization;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class ResultsView : MonoBehaviour
{
    private const string Victory = nameof(Victory);
    private const string Lose = nameof(Lose);

    [SerializeField] private Image _image;
    [SerializeField] private Sprite _victorySprite;
    [SerializeField] private Sprite _loseSprite;
    [SerializeField] private TMP_Text _text;
    [SerializeField] private TMP_Text _coinsCount;

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