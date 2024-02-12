using Agava.YandexGames;
using System.Collections.Generic;
using UnityEngine;

public class Leaderboard : MonoBehaviour
{
    [SerializeField] private LeaderboardView _view;

    private const string AnonymousName = "Anonymous";
    private const string LeaderboardName = "Leaderboard";
    private readonly List<LeaderboardPlayer> _players = new();

    public void SetPlayer(int score)
    {
        if (PlayerAccount.IsAuthorized == false)
            return;

        Agava.YandexGames.Leaderboard.GetPlayerEntry(LeaderboardName, onSuccessCallback: _ =>
        {
            Agava.YandexGames.Leaderboard.SetScore(LeaderboardName, score);
        } );
    }

    public void Fill()
    {
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

                _players.Add(new LeaderboardPlayer(rank,name,score));
            }

            _view.Construct(_players);
        } );
    }
}

public class LeaderboardPlayer
{
    public LeaderboardPlayer(int rank, string name, int score)
    {
        Rank = rank;
        Name = name;
        Score = score;
    }

    public int Rank { get; private set; }
    public string Name { get; private set; }
    public int Score { get; private set; }
}