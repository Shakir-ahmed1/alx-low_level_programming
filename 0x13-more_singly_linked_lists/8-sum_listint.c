#include "lists.h"
/**
 * sum_listint - it adds all data of a listint_t linked list
 * @head: the head of the linked list
 * Return: the sum of the given numbers, if the list is empty returns 0
 */
int sum_listint(listint_t *head)
{
	listint_t *a;
	int b, sum = 0;

	if (head == NULL)
		return (0);
	a = head;
	for (b = 0; a != NULL; b++)
	{
		sum = sum + a->n;
		a = a->next;
	}
	return (sum);
}
