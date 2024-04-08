using System.Collections.Generic;
using Agava.YandexGames;
using UnityEngine;
using UnityEngine.UI;
using PlayerPrefs = Agava.YandexGames.Utility.PlayerPrefs;

public class LeaderboardButton : MonoBehaviour
{
    [SerializeField] private LeaderboardView _view;
    [SerializeField] private Button _closeButton;
    [SerializeField] private Image _authorizedWindow;
    [SerializeField] private Button _authorizedButton;
    [SerializeField] private Button _authorizedCloseButton;
    [SerializeField] private PauseControl _pauseControl;

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
        _authorizedButton.onClick.AddListener(OnAuthorizedClicked);
        _closeButton.onClick.AddListener(HideLeaderBoard);
        _authorizedCloseButton.onClick.AddListener(HideAuthorizedWindow);
    }

    private void OnDisable()
    {
        _open.onClick.RemoveListener(OnOpenClicked);
        _authorizedButton.onClick.RemoveListener(OnAuthorizedClicked);
        _closeButton.onClick.RemoveListener(HideLeaderBoard);
        _authorizedCloseButton.onClick.RemoveListener(HideAuthorizedWindow);
    }

    private void OnOpenClicked()
    {
#if !UNITY_EDITOR && UNITY_WEBGL
        if (PlayerAccount.IsAuthorized == false)
        {
            _pauseControl.SetPauseOnUI(true);            
            _authorizedWindow.gameObject.SetActive(true);
            return;
        }
#endif
        if (_view.isActiveAndEnabled == true)
            HideLeaderBoard();
        else
            OpenLeaderboard();
    }

    private void OpenLeaderboard()
    {
#if !UNITY_EDITOR && UNITY_WEBGL
        if (PlayerAccount.IsAuthorized == true)
            PlayerAccount.RequestPersonalProfileDataPermission();
#endif
        _view.gameObject.SetActive(true);
        _pauseControl.SetPauseOnUI(true);
        _leaderboard.SetPlayer(PlayerPrefs.GetInt(PrefsSaveKeys.ModelsCount));
        _leaderboard.Fill();
    }

    private void OnAuthorizedClicked()
    {
#if !UNITY_EDITOR && UNITY_WEBGL
        PlayerAccount.Authorize(onSuccessCallback: () =>
        {
            HideAuthorizedWindow();
            OpenLeaderboard();
        });
#endif
    }

    private void HideLeaderBoard()
    {
        _pauseControl.SetPauseOnUI(false);
        _view.gameObject.SetActive(false);
    }

    private void HideAuthorizedWindow()
    {
        _pauseControl.SetPauseOnUI(false);
        _authorizedWindow.gameObject.SetActive(false);
    }
}