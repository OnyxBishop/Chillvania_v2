using TMPro;
using UnityEngine;

public class PriceView : MonoBehaviour
{
    [SerializeField] private TMP_Text _text;

    public void Show(int value)
    {
        gameObject.SetActive(true);
        _text.text = value.ToString();
    }

    public void Hide()
    {
        gameObject.SetActive(false);
    }
}