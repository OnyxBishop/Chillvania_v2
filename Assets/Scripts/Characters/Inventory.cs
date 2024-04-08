using System;
using System.Collections.Generic;
using System.Linq;

public class Inventory : IUpgradeable
{
    private List<Cell> _cells;
    private int _initialCount;

    public event Action InventoryEnded;
    public event Action<SelectableType> ItemAdded;
    public event Action<SelectableType> ItemRemoved;
    public event Action<float> Upgraded;

    public Inventory(int initialCount)
    {
        _initialCount = initialCount;
        _cells = new List<Cell>(_initialCount);

        for (int i = 0; i < _initialCount; i++)
        {
            _cells.Add(new Cell());
        }
    }

    public IReadOnlyList<Cell> Cells => _cells;

    public void AddItem(ISelectable selectable)
    {
        if (TryGetEmptyCell(out Cell cell) == false)
        {
            InventoryEnded?.Invoke();
            selectable.DestroySelf();
            return;
        }

        cell.Add(selectable);
        ItemAdded?.Invoke(selectable.Type);
    }

    public ISelectable GetItem(SelectableType type)
    {
        ISelectable selectable;

        foreach (var cell in _cells)
        {
            if (cell.Empty || cell.Selectable.Type.Equals(type) == false)
                continue;

            selectable = cell.Selectable;
            cell.Clear();
            ItemRemoved?.Invoke(selectable.Type);
            return selectable;
        }

        return null;
    }

    public bool TryGetEmptyCell(out Cell cell)
    {
        cell = _cells.FirstOrDefault(cell => cell.Empty == true);

        return cell != null;
    }

    public void Upgrade(float value)
    {
        _cells.Capacity += (int)value;

        for (int i = 0; i < value; i++)
            _cells.Add(new Cell());

        Upgraded?.Invoke(_cells.Capacity);
    }

    public int CalculateCount(SelectableType type)
    {
        return _cells.Count(cell => cell.Weight > 0f && cell.Selectable.Type == type);
    }
}