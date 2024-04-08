using System.Collections.Generic;
using Agava.YandexGames;
using UnityEngine;

public class Leaderboard : MonoBehaviour
{
    private const string AnonymousName = "Anonymous";
    private const string LeaderboardName = "Leaderboard";

    private readonly List<LeaderboardPlayer> _players = new();

    [SerializeField] private LeaderboardView _view;

    public void SetPlayer(int score)
    {
#if UNITY_WEBGL && !UNITY_EDITOR
        if (PlayerAccount.IsAuthorized == false)
            return;

        Agava.YandexGames.Leaderboard.GetPlayerEntry(LeaderboardName, onSuccessCallback: result =>
        {
            if (result.score < score)
                Agava.YandexGames.Leaderboard.SetScore(LeaderboardName, score);
        });
#endif
    }

    public void Fill()
    {
#if UNITY_WEBGL && !UNITY_EDITOR

        _players.Clear();

        if (PlayerAccount.IsAuthorized == false)
            return;

        Agava.YandexGames.Leaderboard.GetEntries(LeaderboardName, onSuccessCallback: result =>
        {
            foreach (var entry in result.entries)
            {
                var rank = entry.rank;
                var name = entry.player.publicName;
                var score = entry.score;

                if (string.IsNullOrEmpty(name))
                    name = AnonymousName;

                _players.Add(new LeaderboardPlayer(rank, name, score));
            }

            _view.Construct(_players);
        });
#endif
    }
}