using TMPro;
using UnityEngine;

namespace Ram.Chillvania.UI.Leaderboard
{
    public class LeaderboardElement : MonoBehaviour
    {
        [SerializeField] private TMP_Text _playerRank;
        [SerializeField] private TMP_Text _playerName;
        [SerializeField] private TMP_Text _playerScore;

        public void Initialise(int rank, string name, int score)
        {
            _playerRank.text = rank.ToString();
            _playerName.text = name;
            _playerScore.text = score.ToString();
        }
    }
}