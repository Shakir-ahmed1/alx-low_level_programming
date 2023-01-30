#include "lists.h"
/**
 * print_listint - it prints all elements of listint_t
 * @h: the first node
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	listint_t *new, *temp;
	unsigned int count = 0;

	new = malloc(sizeof(listint_t));
	if (new == NULL || h == NULL)
		return (0);
	temp = new;
	new->n = h->n;
	new->next = h->next;
	while (new != NULL)
	{
		printf("%d\n", new->n);
		new = new->next;
		count++;
	}
	free(temp);
	return (count);
}
