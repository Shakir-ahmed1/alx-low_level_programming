#include "lists.h"
/**
 * delete_nodeint_at_index - it deletes the node at the given index
 * @head: the head of the list
 * @index: the index of the node to be removed
 * Return: 1 if succeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *a, *b;
	unsigned int i;

	a = *head;
	if (a == NULL || head == NULL)
		return (-1);
	if (index == 0)
	{
		b = a;
		*head = a->next;
		free(b);
		return (1);
	}
	if (index == 1)
	{
		b = a->next;
		a->next = b->next;
		free(b);
		return (1);
	}
	for (i = 0; i + 1 < index && a != NULL; i++)
	{
		a = a->next;
	}
	if (a == NULL)
		return (-1);
	b = a->next;
	a->next = b->next;
	free(b);
	return (1);
}
