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

	if (head == NULL)
		return (NULL);
	a = malloc(sizeof(listint_t));
	if (a == NULL)
		return (NULL);
	a->n = n;
	if (*head == NULL)
	{
		a->next = NULL;
		*head = a;
		return (a);
	}
	if (idx == 0)
	{
		a->next = *head;
		*head = a;
		return (a);
	}
	b = *head;
	for (i = 0; i + 1 < idx && b != NULL; i++)
	{
		b = b->next;
	}
	if (i > idx || b == NULL)
		return (NULL);
	a->next = b->next;
	b->next = a;

	return (a);
}
