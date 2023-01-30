#include "lists.h"
/**
 * free_listint - it frees a listint_t list
 * @head: the head
 */
void free_listint(listint_t *head)
{
	listint_t *a;

	while (head != NULL)
	{
		a = head->next;
		free(head);
		head = a;
	}
}
