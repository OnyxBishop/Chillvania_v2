using System;

public interface IUpgradeable
{
    public event Action<float> Upgraded;
    public void Upgrade(float value);
}