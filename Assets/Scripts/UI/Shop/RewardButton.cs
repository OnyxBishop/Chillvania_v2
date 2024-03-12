using UnityEngine;
using UnityEngine.UI;

public class RewardButton : MonoBehaviour
{
    [SerializeField] private Button _button;
    [SerializeField] private Wallet _wallet;
    [SerializeField] private VideoAd _videoAd;

    private int _reward = 30;

    private void OnEnable() => _button.onClick.AddListener(OnButtonClicked);

    private void OnDisable() => _button.onClick.RemoveListener(OnButtonClicked);

    private void OnButtonClicked()
    {
#if UNITY_WEBGL && !UNITY_EDITOR
        _videoAd.ShowRewarded(AddMoney);
#endif
    }

    private void AddMoney()
    {
        _wallet.AddMoney(_reward);
    }
}
