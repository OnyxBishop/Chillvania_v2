using System;
using System.Collections;
using UnityEngine;

public class LevelEnder : MonoBehaviour
{
    [SerializeField] private GameEndView _gameEndView;
    [SerializeField] private ResultsView _resultsView;
    [SerializeField] private IntProgress _modelsCountProgress;

    private ModelBuilder _allyModel;
    private ModelBuilder _enemyModel;
    private CameraSwitcher _cameraSwitcher;

    private float _delay = 15f;
    private bool _isFirstWinner;

    public event Action GameEnded;
    public event Action CameraAnimationEnded;

    private void OnEnable()
    {
        _allyModel.BuildEnded += OnBuildEnded;
        _enemyModel.BuildEnded += OnBuildEnded;
    }

    private void OnDisable()
    {
        _allyModel.BuildEnded -= OnBuildEnded;
        _enemyModel.BuildEnded -= OnBuildEnded;
    }

    public void Init(CameraSwitcher cameraSwitcher, ModelBuilder allyModel, ModelBuilder enemyModel)
    {
        _allyModel = allyModel;
        _enemyModel = enemyModel;
        _cameraSwitcher = cameraSwitcher;

        enabled = true;
    }

    private void OnBuildEnded(ModelBuilder model)
    {
        if (_isFirstWinner == false)
        {
            FindFirstObjectByType<NPCSpawner>().DisableAllNPC();
            _isFirstWinner = true;
            _cameraSwitcher.LookToModel(model.transform);
            CalculateResults(model);
            _modelsCountProgress.Add();
            _modelsCountProgress.Save();

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

        _resultsView.Render(isVictory);
    }
}
