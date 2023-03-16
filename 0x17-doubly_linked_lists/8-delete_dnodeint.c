#include "lists.h"
/**
 * delete_dnodeint_at_index - it delete the node at the given index
 * @head: the head
 * @index: the index to be deleted
 * Return: 1 if succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *del;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);
	temp = *head;
	if (temp->next != NULL && index == 0)
	{
		*head = temp->next;
		(*head)->prev = NULL;
		free(temp);
		return (1);
	}
	if (index == 0)
	{
		free(temp);
		*head = NULL;
		return (1);
	}
	for (i = 0; i < index && temp != NULL; i++)
	{
		temp = temp->next;
	}
	if (i != index)
		return (-1);
	del = temp;
	temp = temp->prev;
	temp->next = del->next;
	free(del);
	return (1);
}
