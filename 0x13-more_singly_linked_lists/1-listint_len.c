#include "lists.h"
/**
 * listint_len - it returns the number of elements in a linked listint_t list
 * @h: the address of the head
 * Return: the length of the list
 */
size_t listint_len(const listint_t *h)
{
	listint_t *temp;
	unsigned int count = 1;

	if (h == NULL)
		return (0);
	temp = h->next;
	while (temp != NULL)
	{
		temp = temp->next;
		count++;
	}
	return (count);
}
