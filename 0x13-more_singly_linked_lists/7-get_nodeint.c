#include "lists.h"
/**
 * get_nodeint_at_index - it returns the nth node of listint_t linked list
 * @head: the head
 * @index: the index of the node
 * Return: the indexed node if found, if not return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *a;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	a = head;
	for (i = 0; i < index && a != NULL; i++)
	{
		a = a->next;
	}
	if (a == NULL)
		return (NULL);
	return (a);
}
