using System.Collections;
using UnityEngine;

public class GameEndViewer : MonoBehaviour
{
    [SerializeField] private CameraSwitcher _cameraSwitcher;
    [SerializeField] private Canvas _gameEndCanvas;
    [SerializeField] private BehavioursEnableSwitcher _behavioursDisabler;
    [SerializeField] private ResultsView _resultsView;

    private ModelBuilder _allyModel;
    private ModelBuilder _enemyModel;
    private SaveFile _saveFile;

    private float _delay = 15f;

    public void Init(ModelBuilder allyModel, ModelBuilder enemyModel)
    {
        DisableCanvas();
        _allyModel = allyModel;
        _enemyModel = enemyModel;
    }

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

    public void DisableCanvas()
    {
        _gameEndCanvas.gameObject.SetActive(false);
    }

    private void OnBuildEnded(ModelBuilder model)
    {
        _behavioursDisabler.Disable();
        _cameraSwitcher.LookToModel(model.transform);
        CalculateResults(model);
        SaveProgress();

        StartCoroutine(ShowResults());
    }

    private IEnumerator ShowResults()
    {
        yield return new WaitForSeconds(_delay);

        _gameEndCanvas.gameObject.SetActive(true);
    }

    private void CalculateResults(ModelBuilder model)
    {
        bool isVictory;

        isVictory = model == _allyModel;

        _resultsView.Render(isVictory);
    }

    private void SaveProgress()
    {
        _saveFile = Saver.Load();
        _saveFile.PLayerModels++;
        Saver.Save(_saveFile);
    }
}