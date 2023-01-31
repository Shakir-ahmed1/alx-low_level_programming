#include "lists.h"
/**
 * reverse_listint - it reverses the given linked list
 * @head: the address of the head of the list
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp = NULL;
	listint_t *prev = NULL;

	while ((*head) != NULL)
	{
		temp = (*head)->next;
		(*head)->next = prev;
		prev = (*head);
		(*head) = temp;
		}
	(*head) = prev;
	return (*head);
}
