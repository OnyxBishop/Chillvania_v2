using Agava.YandexGames;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using PlayerPrefs = Agava.YandexGames.Utility.PlayerPrefs;

public class LeaderboardButton : MonoBehaviour
{
    [SerializeField] private LeaderboardView _view;
    [SerializeField] private Button _closeButton;

    private Button _open;
    private Leaderboard _leaderboard;

    private void Awake()
    {
        _open = GetComponent<Button>();
        _leaderboard = GetComponent<Leaderboard>();
    }

    private void OnEnable()
    {
        _open.onClick.AddListener(OnOpenClicked);
        _closeButton.onClick.AddListener(Hide);
    }

    private void OnDisable()
    {
        _open.onClick.RemoveListener(OnOpenClicked);
        _closeButton.onClick.RemoveListener(Hide);
    }

    private void OnOpenClicked()
    {
        if (_view.isActiveAndEnabled == true)
            Hide();
        else
            OpenLeaderboard();
    }

    private void OpenLeaderboard()
    {
#if UNITY_WEBGL && !UNITY_EDITOR
        PlayerAccount.Authorize();

        if(PlayerAccount.IsAuthorized == true)
            PlayerAccount.RequestPersonalProfileDataPermission();

        if (PlayerAccount.IsAuthorized == false)
            return;
#endif
        _view.gameObject.SetActive(true);
        _leaderboard.SetPlayer(1);
        _leaderboard.Fill();
    }

    private void Hide()
    {
        _view.gameObject.SetActive(false);
    }
}