using UnityEngine;

public abstract class Progress : ScriptableObject
{
    [SerializeField] private string _saveKey;

    protected string SaveKey => _saveKey;
    public abstract int CurrentProgress { get; }

    private void OnEnable()
    {
        Load();
    }

    public abstract void Load();
    public abstract void Save();
}
