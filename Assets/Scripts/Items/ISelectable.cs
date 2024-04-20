using System;
using Ram.Chillvania.Characters;

namespace Ram.Chillvania.Items
{
    public interface ISelectable
    {
        public event Action InteractEnded;
        public SelectableType Type { get; }
        public void Interact(ICharacter player);
        public void DestroySelf();
        public void Disable();
    }
}