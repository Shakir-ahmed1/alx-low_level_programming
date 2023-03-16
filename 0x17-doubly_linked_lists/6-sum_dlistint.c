#include "lists.h"
/**
 * sum_dlistint - sums all values in the list
 * @head: the head of the list
 * Return: the sum of all elements of the list, if empty return 0
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	int sum = 0;

	if (!head)
		return (0);
	temp = head;
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
