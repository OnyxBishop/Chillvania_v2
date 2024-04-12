using System.Collections;
using Ram.Chillvania.Model;
using Ram.Chillvania.UI.Common;
using TMPro;
using UnityEngine;

public class InventoryView : MonoBehaviour
{
    private TMP_Text _aboveCharacterText;
    private Inventory _inventory;
    private CanvasGroup _canvasGroup;
    private FadeAnimation _fadeAnimation;
    private WaitForSeconds _waitForSeconds = new(1f);
    private Coroutine _fadeCoroutine;

    private void OnEnable()
    {
        _inventory.ItemAdded += OnItemCountChanged;
        _inventory.ItemRemoved += OnItemCountChanged;
    }

    private void OnDisable()
    {
        _inventory.ItemAdded -= OnItemCountChanged;
        _inventory.ItemRemoved -= OnItemCountChanged;
    }

    public void Init(Inventory inventory)
    {
        _inventory = inventory;
        _canvasGroup = GetComponentInChildren<CanvasGroup>();
        _aboveCharacterText = _canvasGroup.GetComponentInChildren<TMP_Text>();
        _fadeAnimation = new FadeAnimation(_canvasGroup);

        _fadeAnimation.Disable(0);
        gameObject.SetActive(true);
    }

    private void OnItemCountChanged(SelectableType type)
    {
        int count = _inventory.CalculateCount(type);
        int capacity = _inventory.Cells.Count;

        _aboveCharacterText.text = string.Format($"{count} / {capacity}");
        _aboveCharacterText.gameObject.SetActive(true);

        if (_fadeCoroutine != null)
            StopCoroutine(_fadeCoroutine);

        _fadeCoroutine = StartCoroutine(TemporaryFade());
    }

    private IEnumerator TemporaryFade()
    {
        _fadeAnimation.Enable(1);

        yield return _waitForSeconds;

        _fadeAnimation.Disable(1);
    }
}