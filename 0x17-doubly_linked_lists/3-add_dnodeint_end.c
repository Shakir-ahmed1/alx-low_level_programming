#include "lists.h"
/**
 * add_dnodeint_end - adds the list at the end of dlinked list
 * @head: the head of the list
 * @n: the data to be inserted
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	new->prev = temp;
	temp->next = new;
	return (new);
}
