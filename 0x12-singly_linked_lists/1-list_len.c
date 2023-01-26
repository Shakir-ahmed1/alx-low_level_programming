#include "lists.h"
/**
 * list_len - returns the length of given list
 * @h: the head of the list
 * Return: the list length
 */
size_t list_len(const list_t *h)
{
	unsigned int i = 1;
	list_t *temp;

	if (h == NULL)
	{
		return (0);
	}
	temp = h->next;

	while(temp != NULL)
	{
		i++;
		temp = temp->next;
	}
	return (i);
}
