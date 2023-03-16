#include "lists.h"
/**
 * insert_nodeint_at_index - inserts node at the given index
 * @h: the head
 * @n: the data of the new node
 * Return: address of the new node, NULL if failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
        dlistint_t *a, *b;
        unsigned int i;

        if (h == NULL)
                return (NULL);
        a = malloc(sizeof(dlistint_t));
        if (a == NULL)
                return (NULL);
        a->n = n;
        if (*h == NULL && idx == 0)
        {
                return (add_dnodeint(h, n));
        }
        b = *h;
        for (i = 0; i + 1 < idx && b != NULL; i++)
        {
                b = b->next;
        }
        if (i > idx || b == NULL)
                return (NULL);
        a->next = b->next;
	a->prev = b;
        b->next = a;

        return (a);
}
