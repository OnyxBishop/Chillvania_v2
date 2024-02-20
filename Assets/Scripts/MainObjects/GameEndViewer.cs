using System.Collections;
using UnityEngine;
using UnityEngine.SceneManagement;

public class GameEndViewer : MonoBehaviour
{
    [SerializeField] private Canvas _gameEndCanvas;
    [SerializeField] private RestartButton _restartButton;
    [SerializeField] private ResultsView _resultsView;
    [SerializeField] private CameraSwitcher _cameraSwitcher;
    [SerializeField] private VideoAd _videoAd;

    private ModelBuilder _allyModel;
    private ModelBuilder _enemyModel;

    private float _delay = 15f;
    private bool _isFirstWinner;

    public void Init(ModelBuilder allyModel, ModelBuilder enemyModel)
    {
        _gameEndCanvas.gameObject.SetActive(false);
        _allyModel = allyModel;
        _enemyModel = enemyModel;
    }

    private void OnEnable()
    {
        _allyModel.BuildEnded += OnBuildEnded;
        _enemyModel.BuildEnded += OnBuildEnded;
        _restartButton.Clicked += OnRestartClicked;
    }

    private void OnDisable()
    {
        _allyModel.BuildEnded -= OnBuildEnded;
        _enemyModel.BuildEnded -= OnBuildEnded;
        _restartButton.Clicked -= OnRestartClicked;
    }

    private void OnBuildEnded(ModelBuilder model)
    {
        if (_isFirstWinner == false)
        {
            _isFirstWinner = true;
            //_cameraSwitcher.LookToModel(model.transform);
            CalculateResults(model);
            SaveProgress();

            StartCoroutine(ShowResults());
        }
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
        Debug.Log($"Здесь было сохранение {gameObject.name}");
    }

    private void OnRestartClicked()
    {
#if UNITY_WEBGL && !UNITY_EDITOR
        _videoAd.ShowInterstitial();
#endif
        SceneManager.LoadScene(SceneManager.GetActiveScene().name);
    }
}