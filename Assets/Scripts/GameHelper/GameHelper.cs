using System.Collections;
using Cinemachine;
using UnityEngine;
using UnityEngine.UI;
using PlayerPrefs = Agava.YandexGames.Utility.PlayerPrefs;

public class GameHelper : MonoBehaviour
{
    [Header("Tutorial Objects")]
    [SerializeField] private TutorialEntryPoint _entryPoint;
    [SerializeField] private HelpFrame _helpFrame;
    [SerializeField] private Teleport _teleport;
    [SerializeField] private Pointer _pointerPrefab;
    [SerializeField] private Image _arrowImage;

    [Header("Upgrade System")]
    [SerializeField] private UpgradeSystem _upgradeSystem;
    [SerializeField] private UpgradeCardsView _upgradeCards;

    [Header("Spawners/common objects")]
    [SerializeField] private CinemachineVirtualCamera _camera;
    [SerializeField] private ModelSpawner _modelSpawner;
    [SerializeField] private NPCSpawner _npcspawner;
    [SerializeField] private AreaCollector _areaCollector;
    [SerializeField] private SnowballFabric _snowballFabric;

    [Header("Character")]
    [SerializeField] private CharacterStatsView _characterStatsView;

    [Header("Points")]
    [SerializeField] private Transform _snowballPoint;

    private const string FirstEntryKey = nameof(FirstEntryKey);

    private Character _character;
    private Pointer _pointer;

    private bool _isSnowballTaking = false;
    private bool _isEnoughSnowballs = false;
    private bool _isBuilded = false;
    private bool _hasUpgrade = false;

    private void Start()
    {
        _character.Inventory.ItemAdded += OnItemAdded;
    }

    private void OnDestroy()
    {
        _character.Inventory.ItemAdded -= OnItemAdded;
    }

    public void StartTutorial(Character character)
    {
        _character = character;
        _camera.Follow = _character.transform;
        StartCoroutine(TutorialCoroutine());
    }

    private IEnumerator TutorialCoroutine()
    {
        CreateSnowball();
        _helpFrame.Enable();

        yield return new WaitUntil(() => _isSnowballTaking);
        _helpFrame.SwitchToRoll();

        yield return new WaitUntil(() => _isEnoughSnowballs);
        _helpFrame.SwitchToDeliver();

        CreateModelsZone();
        yield return new WaitUntil(() => _isBuilded);

        _helpFrame.SwitchToBuild();
        _arrowImage.gameObject.SetActive(true);

        yield return new WaitForSecondsRealtime(5f);
        _arrowImage.gameObject.SetActive(false);

        CreateUpgradeSystem();
        _helpFrame.SwitchToGetUpgrade();

        _characterStatsView.Enable(_character);
        _upgradeSystem.StatsIncreased += OnStatsIncreased;

        yield return new WaitUntil(() => _hasUpgrade);
        _helpFrame.ShowEnd();
        _teleport.gameObject.SetActive(true);
        CreatePointer(_teleport.transform.position);

        yield return new WaitForSecondsRealtime(3f);

#if UNITY_WEBGL && !UNITY_EDITOR
        PlayerPrefs.SetInt(FirstEntryKey, 1);
        PlayerPrefs.Save();
#endif
        _helpFrame.Disable();
    }

    private void CreateSnowball()
    {
        Snowball snowball = _snowballFabric.Create(_snowballPoint);
        snowball.InteractStarting += OnSnowballInteracting;
        CreatePointer(snowball.transform.position);
    }

    private void CreateUpgradeSystem()
    {
        _upgradeSystem.Init(_character, _modelSpawner.Ally, _npcspawner);
        _upgradeSystem.SetUpgrade();
    }

    private void CreateModelsZone()
    {
        _modelSpawner.Create();
        _modelSpawner.gameObject.SetActive(true);
        _areaCollector.Init(_modelSpawner.Ally.transform, _modelSpawner.Enemy.transform);
        _modelSpawner.Ally.ValueChanged += OnModelValueChanged;
        CreatePointer(_areaCollector.transform.position);
    }

    private void CreatePointer(Vector3 targetPosition)
    {
        _pointer = Instantiate(_pointerPrefab);
        _pointer.SetPosition(targetPosition);
        _pointer.PlayAnimation();
    }

    private void OnSnowballInteracting(Snowball snowball)
    {
        snowball.InteractStarting -= OnSnowballInteracting;
        _pointer.StopAnimation();
        Destroy(_pointer.gameObject);

        _isSnowballTaking = true;
    }

    private void OnModelValueChanged(float _)
    {
        _modelSpawner.Ally.ValueChanged -= OnModelValueChanged;
        Destroy(_pointer.gameObject);

        _isBuilded = true;
    }

    private void OnItemAdded(SelectableType _)
    {
        _isEnoughSnowballs = true;
    }

    private void OnStatsIncreased()
    {
        _upgradeSystem.Upgraded -= OnStatsIncreased;
        _hasUpgrade = true;
    }
}