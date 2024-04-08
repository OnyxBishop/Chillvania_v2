using Lean.Localization;
using TMPro;
using UnityEngine;

public class HelpFrame : MonoBehaviour
{
    private const string ReachSnowball = nameof(ReachSnowball);
    private const string RollSnowball = nameof(RollSnowball);
    private const string DeliverSnowball = nameof(DeliverSnowball);
    private const string BuildModel = nameof(BuildModel);
    private const string UpgradeSystem = nameof(UpgradeSystem);
    private const string GetUpgrade = nameof(GetUpgrade);
    private const string EndTask = nameof(EndTask);

    [SerializeField] private TMP_Text _mainText;
    [SerializeField] private UpgradeBar _upgradeBar;

    private void Start()
    {
        string text = LeanLocalization.GetTranslationText(ReachSnowball);
        _mainText.text = text;
    }

    public void Enable()
    {
        gameObject.SetActive(true);
    }

    public void Disable()
    {
        gameObject?.SetActive(false);
    }

    public void SwitchToRoll()
    {
        _mainText.text = LeanLocalization.GetTranslationText(RollSnowball);
    }

    public void SwitchToDeliver()
    {
        _mainText.text = LeanLocalization.GetTranslationText(DeliverSnowball);
    }

    public void SwitchToBuild()
    {
        _mainText.text = LeanLocalization.GetTranslationText(BuildModel);
        _upgradeBar.gameObject.SetActive(true);
    }

    public void SwitchToGetUpgrade()
    {
        _mainText.text = LeanLocalization.GetTranslationText(GetUpgrade);
    }

    public void ShowEnd()
    {
        _mainText.text = LeanLocalization.GetTranslationText(EndTask);
    }
}