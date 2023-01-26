#include "lists.h"
/**
 * print_list - it prints all the elements of a list_t list
 * @h: the head of the list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	list_t *temp;
	int i = 1;

	if (h == NULL)
	{
		return (0);
	}
	if (h->str == NULL)
	{
		printf("[0] (nil)\n");
	}
	else
	{
		printf("[%d] %s\n", h->len, h->str);
	}
	temp = h->next;
	while (temp != NULL)
	{
		if (temp->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
		printf("[%d] %s\n", temp->len, temp->str);
		}
		temp = temp->next;
		i++;
	}
	return (i);
}
