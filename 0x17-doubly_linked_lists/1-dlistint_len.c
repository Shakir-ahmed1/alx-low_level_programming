#include "lists.h"
/**
 * dlistint_len - returns the number of elements in the given linkedlist
 * @h: the head of the linked list
 * Return: length of the doubly linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	dlistint_t *temp;
	size_t count = 0;

	if (h == NULL)
		return (0);
	temp = (dlistint_t *) h;
	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
