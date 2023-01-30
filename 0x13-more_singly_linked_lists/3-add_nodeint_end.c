#include "lists.h"
/**
 * add_nodeint_end - it adds a node at the end of the listint_t list
 * @head: the head of the list
 * @n: the number to be stored
 * Return: the address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *t, *a;

	a = malloc(sizeof(listint_t));
	a->next = NULL;
	a->n = n;
	if (*head == NULL)
	{
		*head = a;
		return (a);
	}
	if (a == NULL)
		return (0);
	t = *head;
	while (t->next != NULL)
	{
		t = t->next;
	}
	t->next = a;
	return (a);
}
