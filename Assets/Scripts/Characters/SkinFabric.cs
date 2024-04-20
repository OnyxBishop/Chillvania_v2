using System;
using Ram.Chillvania.Shop;
using UnityEngine;

[CreateAssetMenu(fileName = "CharacterSkinFabric", menuName = "CharacterSkins", order = 51)]
public class SkinFabric : ScriptableObject
{
    [SerializeField] private GameObject _default;
    [SerializeField] private GameObject _redHat;
    [SerializeField] private GameObject _greenHat;
    [SerializeField] private GameObject _blueHat;
    [SerializeField] private GameObject _yellowHat;

    public GameObject Create(SkinsType type, Transform transform)
    {
        switch (type)
        {
            case SkinsType.Default:
                return Instantiate(_default, transform);
            case SkinsType.RedHat:
                return Instantiate(_redHat, transform);
            case SkinsType.GreenHat:
                return Instantiate(_greenHat, transform);
            case SkinsType.BlueHat:
                return Instantiate(_blueHat, transform);
            case SkinsType.YellowHat:
                return Instantiate(_yellowHat, transform);

            default:
                throw new ArgumentException();
        }
    }
}