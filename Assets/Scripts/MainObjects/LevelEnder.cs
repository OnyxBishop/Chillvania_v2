using System;
using System.Collections;
using UnityEngine;
using PlayerPrefs = Agava.YandexGames.Utility.PlayerPrefs;

public class LevelEnder : MonoBehaviour
{
    [SerializeField] private GameEndView _gameEndView;
    [SerializeField] private ResultsView _resultsView;
    [SerializeField] private Wallet _wallet;

    private ModelBuilder _allyModel;
    private ModelBuilder _enemyModel;
    private CameraSwitcher _cameraSwitcher;

    private int _reward = 50;
    private float _delay = 15f;
    private bool _isFirstWinner;

    public event Action GameEnded;
    public event Action CameraAnimationEnded;
    public event Action OnNextButtonClicked;

    private void OnEnable()
    {
        _allyModel.BuildEnded += OnBuildEnded;
        _enemyModel.BuildEnded += OnBuildEnded;

        _gameEndView.OnNextButtonClicked += OnNextClicked;
    }

    private void OnDisable()
    {
        _allyModel.BuildEnded -= OnBuildEnded;
        _enemyModel.BuildEnded -= OnBuildEnded;
    }

    public void Init(CameraSwitcher cameraSwitcher,
        ModelBuilder allyModel, ModelBuilder enemyModel)
    {
        _allyModel = allyModel;
        _enemyModel = enemyModel;
        _cameraSwitcher = cameraSwitcher;

        enabled = true;
    }

    public void Disable()
    {
        enabled = false;

        _allyModel = null;
        _enemyModel = null;
        _cameraSwitcher = null;
        _isFirstWinner = false;
    }

    private void OnBuildEnded(ModelBuilder model)
    {
        if (_isFirstWinner == false)
        {
            FindFirstObjectByType<NPCSpawner>().DisableAllNPC();
            _isFirstWinner = true;
            _cameraSwitcher.LookToModel(model.transform);
            CalculateResults(model);

            GameEnded?.Invoke();

            StartCoroutine(ShowModel());
        }
    }

    private IEnumerator ShowModel()
    {
        yield return new WaitForSeconds(_delay);

        CameraAnimationEnded?.Invoke();
    }

    private void CalculateResults(ModelBuilder model)
    {
        bool isVictory;

        isVictory = model == _allyModel;

        if (isVictory)
        {
            _wallet.AddMoney(_reward);
            int modelsProgress = PlayerPrefs.GetInt(PrefsSaveKeys.ModelsCount);
            modelsProgress++;
            _resultsView.Render(isVictory, _reward);
            return;

#if UNITY_WEBGL && !UNITY_EDITOR
            PlayerPrefs.SetInt(PrefsSaveKeys.ModelsCount, modelsProgress);
            PlayerPrefs.Save();
#endif
        }

        _resultsView.Render(isVictory);
    }

    private void OnNextClicked()
    {
        OnNextButtonClicked?.Invoke();
    }
}