#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts node at the given index
 * @h: the head
 * @n: the data of the new node
 * @idx: the index of the new node
 * Return: address of the new node, NULL if failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *new;
	unsigned int count = 0;

	if (h == NULL)
		return (NULL);
	if (*h == NULL && idx > 0)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	temp = *h;
	while (temp != NULL)
	{
		if (count == idx)
		{
			new = malloc(sizeof(dlistint_t));
			if (!new)
				return (NULL);
			temp->prev->next = new;
			new->n = n;
			new->next = temp;
			new->prev = temp->prev;
			temp->prev = new;
			return (new);
		}
		count++;
		temp = temp->next;
	}
	if (idx > count)
	{
		return (NULL);
	}
	return (add_dnodeint_end(h, n));
}
