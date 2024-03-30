using UnityEngine;

[RequireComponent(typeof(AudioSource))]
public class BackgroundSound : MonoBehaviour
{
    public static BackgroundSound Instance;

    [SerializeField] private AudioSource _audioSource;

    public AudioSource AudioSource => _audioSource;

    private void Awake()
    {
        if (Instance == null)
        {
            Instance = this;
            DontDestroyOnLoad(gameObject);
        }
        else
        {
            Destroy(gameObject);
        }
    }
}