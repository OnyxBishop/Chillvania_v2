namespace Ram.Chillvania.Characters
{
    public interface IInput
    {
        public bool HasDirection { get; }
        public void GetDirection();
        public void ChainWithCharacter(Character character);
        public void Enable();
        public void Disable();
    }
}