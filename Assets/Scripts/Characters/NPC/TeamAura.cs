using UnityEngine;

[RequireComponent(typeof(SpriteRenderer))]
public class TeamAura : MonoBehaviour
{
    private SpriteRenderer _spriteRenderer;

    private void Awake()
    {
        _spriteRenderer = GetComponent<SpriteRenderer>();
    }

    public void SetColor(NpcType type)
    {
        if (type == NpcType.Ally)
            _spriteRenderer.color = Color.blue;
        else if (type == NpcType.Enemy)
            _spriteRenderer.color = Color.red;
    }
}
