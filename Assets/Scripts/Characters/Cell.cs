using Ram.Chillvania.Items;

public class Cell
{
    private ISelectable _selectable;

    public Cell()
    {
        Empty = true;
    }

    public ISelectable Selectable => _selectable;
    public bool Empty { get; private set; }
    public float Weight { get; private set; }

    public void Add(ISelectable selectable)
    {
        _selectable = selectable;

        if (_selectable is Snowball snowball)
        {
            Weight = snowball.Weight;
        }

        Empty = false;
    }

    public void Clear()
    {
        Empty = true;
        Weight = 0f;
        _selectable = null;
    }
}