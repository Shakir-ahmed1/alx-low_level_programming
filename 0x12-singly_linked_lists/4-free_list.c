#include "lists.h"
/**
 * free_list - it frees list_t list
 * @head: the first node
 */
void free_list(list_t *head)
{
	list_t *a;

	while (head != NULL)
	{
		a = head->next;
		free(head->str);
		free(head);
		head = a;
	}
}
