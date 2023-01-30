#include "lists.h"
/**
 * insert_nodeint_at_index - it inserts a node at the given index
 * @head: the head of the list
 * @idx: the index of the new node should have in the list
 * @n: the number to be stored
 * Return: the address of the new node, or NULL if it falied
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *a, *b;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (NULL);
	a = malloc(sizeof(listint_t));
	if (a == NULL)
		return (NULL);
	a->n = n;
	b = *head;
	for (i = 0; i < idx - 1 || b == NULL; i++)
	{
		b = b->next;
	}
	a->next = b->next;
	b->next = a;

	if (b == NULL)
		return (NULL);
	return (a);
}
