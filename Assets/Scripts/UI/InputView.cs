using UnityEngine;
using DG.Tweening;
using UnityEngine.UI;

public class InputView : MonoBehaviour
{
    [SerializeField] private Localization _localization;
    [SerializeField] private Sprite _rusSprite;
    [SerializeField] private Sprite _engSprite;
    [SerializeField] private Sprite _arSprite;

    private const string English = "English";
    private const string Russian = "Russian";
    private const string Turkish = "Arabic";

    private InputSetter _inputSetter;
    private Image _image;

    private void Awake()
    {
        _image = GetComponentInChildren<Image>();
        _image.enabled = false;
        _image.color = new Color(1f, 1f, 1f, 0f);
    }

    public void Init(InputSetter inputSetter)
    {
        _inputSetter = inputSetter;
    }

    public void ShowHint()
    {
        if (_inputSetter.Input is KeyboardInput)
        {
            switch (_localization.CurrentLanguage)
            {
                case English:
                    _image.sprite = _engSprite;
                    break;
                case Russian:
                    _image.sprite = _rusSprite;
                    break;
                case Turkish:
                    _image.sprite = _arSprite;
                    break;
                default:
                    throw new System.NotImplementedException();
            }

            _image.enabled = true;
            _image.DOFade(1, 1.5f).SetLoops(5).OnComplete(() => gameObject.SetActive(false));
        }
    }
}