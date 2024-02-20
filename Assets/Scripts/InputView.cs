using UnityEngine;
using DG.Tweening;
using UnityEngine.UI;

public class InputView : MonoBehaviour
{
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
            _image.enabled = true;
            _image.DOFade(1, 1.5f).SetLoops(5).OnComplete(() => gameObject.SetActive(false));
        }
    }
}