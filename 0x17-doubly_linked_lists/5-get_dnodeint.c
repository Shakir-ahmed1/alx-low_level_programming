#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of the linkedlist
 * @head: the head of the list
 * @index: the index to get
 * Return: the node at the given index, NULL if node doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	temp = head;
	for (i = 0; i < index; i++)
	{
		if (temp == NULL)
			return (NULL);
		temp = temp->next;
	}
	return (temp);
}
