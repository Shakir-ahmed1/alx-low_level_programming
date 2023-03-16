#include "lists.h"
/**
 * print_dlistint - prints all elements of a doubly linked list
 * @h: the head of the dlinkedlist
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *temp;
	size_t count = 0;

	if (h == NULL)
	{
		return (0);
	}
	temp = (dlistint_t *) h;
	while (temp != NULL)
	{
		count++;
		printf("%d\n", temp->n);
		temp = temp->next;
	}
	return (count);
}
