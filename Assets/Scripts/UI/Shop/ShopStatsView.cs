using TMPro;
using UnityEngine;

public class ShopStatsView : MonoBehaviour
{
    [SerializeField] private TMP_Text _strenghtText;
    [SerializeField] private TMP_Text _speedText;
    [SerializeField] private TMP_Text _teamCountText;

    private PlayerData _data;

    private int _maxStrenght;
    private float _maxSpeed;
    private float _maxTeamCount;

    private void OnEnable() =>
        _data.StatsChanged += OnStatsChanged;

    private void OnDisable() =>
        _data.StatsChanged -= OnStatsChanged;

    public void Init(PlayerData data)
    {
        _data = data;

        _maxStrenght = _data.MaxInitialStrenght;
        _maxSpeed = _data.MaxInitialSpeed;
        _maxTeamCount = _data.MaxInitialTeam;
    }

    public void Show()
    {
        _strenghtText.text = string.Format($"{_data.Config.Strenght} / {_maxStrenght}");
        _speedText.text = string.Format($"{_data.Config.Speed} / {_maxSpeed}");
        _teamCountText.text = string.Format($"{_data.Config.TeamCount} / {_maxTeamCount}");
    }

    private void OnStatsChanged(StatsType type)
    {
        if (type == StatsType.Strenght)
            _strenghtText.text = string.Format($"{_data.Config.Strenght} / {_maxStrenght}");

        if (type == StatsType.Speed)
            _speedText.text = string.Format($"{_data.Config.Speed} / {_maxSpeed}");

        if (type == StatsType.TeamCount)
            _teamCountText.text = string.Format($"{_data.Config.TeamCount} / {_maxTeamCount}");
    }
}