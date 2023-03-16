#include "lists.h"
/**
 * free_dlistint - frees all elements of the linked list
 * @head: the head of the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (head == NULL)
		return;
	temp = head;
	while (temp != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
