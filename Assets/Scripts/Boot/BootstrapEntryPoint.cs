using UnityEngine;

public class BootstrapEntryPoint : MonoBehaviour
{
    private SaveFile _saveFile;

    public SaveFile SaveFile => _saveFile;

    private void Awake()
    {
        _saveFile = Saver.Load();
        Saver.Save(_saveFile);
    }
}