using System;
using System.Collections.Generic;
using Ram.Chillvania.ScriptableObjects;
using Ram.Chillvania.Shop;
using Ram.Chillvania.Upgrade;

namespace Ram.Chillvania.Boot
{
    [Serializable]
    public class PlayerData
    {
        public PlayerConfig Config;
        public SkinsType SelectedSkin;

        public List<SkinsType> OpenedSkins;

        private int _maxInitialStrenght = 7;
        private float _maxInitialSpeed = 4f;
        private int _maxInitialTeam = 1;

        public PlayerData()
        {
            Config = new PlayerConfig(3, 2.5f, 3, 0);
            OpenedSkins = new();
            SelectedSkin = SkinsType.Default;
        }

        public event Action<StatsType> StatsChanged;

        public int MaxInitialStrenght => _maxInitialStrenght;
        public float MaxInitialSpeed => _maxInitialSpeed;
        public int MaxInitialTeam => _maxInitialTeam;

        public void OpenSkin(SkinsType type)
        {
            if (OpenedSkins.Contains(type))
                throw new ArgumentException($"Skin {type} is already open");

            OpenedSkins.Add(type);
        }

        public void IncreaseStats(StatsType type, float value)
        {
            if (value < 0)
                throw new ArgumentException("Value cannot be smaller than 0");

            if (type == StatsType.Strenght)
                Config.Strenght += (int)value;

            if (type == StatsType.Speed)
                Config.Speed = MathF.Round((Config.Speed + value) * 10) / 10f;

            if (type == StatsType.TeamCount)
                Config.TeamCount += (int)value;

            StatsChanged?.Invoke(type);
        }

        public bool CanIncrease(StatsType type, float value)
        {
            if (type == StatsType.Strenght)
                if (Config.Strenght + value > _maxInitialStrenght)
                    return false;

            if (type == StatsType.Speed)
                if ((Config.Speed + value) - _maxInitialSpeed >= 0.1f)
                    return false;

            if (type == StatsType.TeamCount)
                if (Config.TeamCount + value > _maxInitialTeam)
                    return false;

            return true;
        }
    }
}