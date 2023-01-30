#include "lists.h"
/**
 * free_listint2 - frees listint_t list
 * @head: the address of the head
 */
void free_listint2(listint_t **head)
{
	listint_t *b;

	while ((*head) != NULL)
	{
		b = (*head)->next;
		free((*head));
		*head = b;
	}
	*head = NULL;
}
