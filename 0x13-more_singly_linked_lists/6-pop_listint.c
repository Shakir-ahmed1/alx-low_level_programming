#include "lists.h"
/**
 * pop_listint - it deletes the head node of liistint_t linked list
 * @head: the first element of the list
 * Return: the data of the deleted node
 */
int pop_listint(listint_t **head)
{
	listint_t *a;
	int c;

	if (head == NULL || *head == NULL)
		return (0);
	a = *head;
	if (a == a->next)
	{
		a->next = NULL;
	}
	*head = (*head)->next;
	c = a->n;
	free(a);
	return (c);
}
