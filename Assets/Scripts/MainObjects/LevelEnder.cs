using System;
using System.Collections;
using UnityEngine;
using PlayerPrefs = Agava.YandexGames.Utility.PlayerPrefs;

public class LevelEnder : MonoBehaviour
{
    [SerializeField] private GameEndView _gameEndView;
    [SerializeField] private ResultsView _resultsView;
    [SerializeField] private Wallet _wallet;
    [SerializeField] private int _victoryMoney;
    [SerializeField] private int _loseMoney;

    private ModelBuilder _allyModel;
    private ModelBuilder _enemyModel;
    private CameraSwitcher _cameraSwitcher;

    private float _delay = 6f;
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
        if (model.Equals(_allyModel))
            _enemyModel.StopConstruction();
        else if (model.Equals(_enemyModel))
            _allyModel.StopConstruction();

        if (_isFirstWinner == false)
        {
            _isFirstWinner = true;
            FindFirstObjectByType<NPCSpawner>().DisableAllNPC();
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
            _wallet.AddMoney(_victoryMoney);
            int modelsProgress = PlayerPrefs.GetInt(PrefsSaveKeys.ModelsCount);
            modelsProgress++;
            _resultsView.Render(isVictory, _victoryMoney);

#if UNITY_WEBGL && !UNITY_EDITOR
            PlayerPrefs.SetInt(PrefsSaveKeys.ModelsCount, modelsProgress);
            PlayerPrefs.Save();
#endif
            return;
        }

        _wallet.AddMoney(_loseMoney);
        _resultsView.Render(isVictory, _loseMoney);
    }

    private void OnNextClicked()
    {
        OnNextButtonClicked?.Invoke();
    }
}