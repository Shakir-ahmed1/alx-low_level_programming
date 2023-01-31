#include "lists.h"
/**
 * free_listint_safe - it prints all elements of the linked list of listint_t
 * @h: the address of first node
 * Return: number of freed nodes
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *new;
	unsigned int count = 0;

	while (*h != NULL)
	{
		new = (*h)->next;
		(*h)->next = NULL;
		free(*h);
		*h = new;
		count++;
	}
	h = NULL;
	return (count);
}
