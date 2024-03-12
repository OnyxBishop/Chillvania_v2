using TMPro;
using UnityEngine;

public class CharacterStatsView : MonoBehaviour
{
    [SerializeField] private TMP_Text _strenghtValue;
    [SerializeField] private TMP_Text _capacityValue;
    [SerializeField] private TMP_Text _teamCountValue;
    [SerializeField] private TMP_Text _snowballsCount;
    [SerializeField] private AudioSource _upgradeAudio;
    [SerializeField] private AudioClip _upgradeAudioClip;

    private Character _character;
    private NPCSpawner _npcSpawner;

    private void OnEnable()
    {
        _character.Interaction.Upgraded += OnUpgraded;
        _character.Inventory.Upgraded += OnUpgraded;

        _character.Inventory.ItemAdded += OnItemCountChanged;
        _character.Inventory.ItemRemoved += OnItemCountChanged;
        _npcSpawner.Spawned += OnSpawn;
    }

    private void OnDisable()
    {
        _character.Interaction.Upgraded -= OnUpgraded;
        _character.Inventory.Upgraded -= OnUpgraded;

        _character.Inventory.ItemAdded -= OnItemCountChanged;
        _character.Inventory.ItemRemoved -= OnItemCountChanged;
        _npcSpawner.Spawned -= OnSpawn;
    }

    public void Enable(Character character)
    {
        _character = character;
        _npcSpawner = FindFirstObjectByType<NPCSpawner>();

        _strenghtValue.text = _character.Interaction.Strenght.ToString();
        _capacityValue.text = _character.Inventory.Cells.Count.ToString();
        _teamCountValue.text = _npcSpawner.CalculateCount(NpcType.Ally).ToString();
        _snowballsCount.text = string.Format($"{0}/{_character.Inventory.Cells.Count}");
        gameObject.SetActive(true);
    }

    private void OnUpgraded(float value)
    {
        _strenghtValue.text = _character.Interaction.Strenght.ToString();
        _capacityValue.text = _character.Inventory.Cells.Count.ToString();
        _upgradeAudio.PlayOneShot(_upgradeAudioClip);
    }

    private void OnSpawn(NPC npc)
    {
        if (npc.Type == NpcType.Ally)
        {
            _teamCountValue.text = _npcSpawner.CalculateCount(NpcType.Ally).ToString();
            _upgradeAudio.PlayOneShot(_upgradeAudioClip);
        }
    }

    private void OnItemCountChanged(SelectableType type)
    {
        int count = _character.Inventory.CalculateCount(type);
        int capacity = _character.Inventory.Cells.Count;

        _snowballsCount.text = string.Format($"{count}/{capacity}");
    }
}