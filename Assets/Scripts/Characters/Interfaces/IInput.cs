public interface IInput
{
    public bool Moving { get; }
    public void GetDirection();
    public void ChainWithCharacter(Character character);
    public void Enable();
    public void Disable();
}
