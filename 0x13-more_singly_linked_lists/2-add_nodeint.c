#include "lists.h"
/**
 * add_nodeint - it adds a node to listint_t at the beginning of the list
 * @head: the address of the head
 * @n: the integer to be stored
 * Return: the address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *t;

	t = malloc(sizeof(listint_t));
	if (t == NULL)
		return (NULL);

	t->next = *head;
	t->n = n;
	*head = t;
	return (t);
}
