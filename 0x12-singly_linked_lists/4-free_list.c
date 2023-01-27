#include "lists.h"
/**
 * free_list - it frees list_t list
 * head - the first node
 */
void free_list(list_t *head)
{
	list_t **a;
	a = &head;
	if (head == NULL)
	{
		return;
	}
	while (head != NULL)
	{
		a = &head;
		head = head->next;
		free((*a)->str);
		free(*a);
	}
}
