using System;
using UnityEngine;
using PlayerPrefs = Agava.YandexGames.Utility.PlayerPrefs;

namespace Ram.Chillvania.Shop
{
    public class Wallet : MonoBehaviour
    {
        private int _money;

        public event Action<int> MoneyChanged;

        public int Money => _money;

        private void Awake()
        {
#if !UNITY_EDITOR && UNITY_WEBGL
        _money = PlayerPrefs.GetInt(PrefsSaveKeys.Money, 0);
#endif
        }

        public void AddMoney(int money)
        {
            _money += money;

#if !UNITY_EDITOR && UNITY_WEBGL
        PlayerPrefs.SetInt(PrefsSaveKeys.Money, _money);
        PlayerPrefs.Save();
#endif

            MoneyChanged?.Invoke(_money);
        }

        public void RemoveMoney(int money)
        {
            _money -= money;

            if (_money < 0)
                _money = 0;

#if !UNITY_EDITOR && UNITY_WEBGL
        PlayerPrefs.SetInt(PrefsSaveKeys.Money, _money);
        PlayerPrefs.Save();
#endif

            MoneyChanged?.Invoke(_money);
        }

        public bool IsEnough(int price) => _money >= price;
    }
}