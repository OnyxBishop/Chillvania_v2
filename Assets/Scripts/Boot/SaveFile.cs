using UnityEngine;

public abstract class SaveFile : ScriptableObject
{
    [SerializeField] private string _key;

    protected string SaveKey => _key;
    public abstract int CurrentProgress { get; }

    private void OnEnable() => Load();

    public abstract void Load();
    public abstract void Save();
}