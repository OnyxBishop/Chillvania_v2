using UnityEngine;

public class UIEnableSwitcher : MonoBehaviour
{
    [SerializeField] private Canvas _uiCanvas;
    [SerializeField] private CharacterStatsView _characterStatsView;
    [SerializeField] private Timer _timer;

    public void Enable(Character character)
    {
        _uiCanvas.gameObject.SetActive(true);
        _characterStatsView.Enable(character);
        _timer.StartCounting();
    }

    public void Disable()
    {
        _uiCanvas.gameObject.SetActive(false);
    }
}