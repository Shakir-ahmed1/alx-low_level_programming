
#include "lists.h"
/**
 * find_listint_loop - finds the loop in the linked list
 * @head: the first node
 * Return: the address of the start of the loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *temp = head;
	listint_t *nex = head;

	while (head && temp && temp->next)
	{
		temp = temp->next;
		nex = nex->next->next;
		if (temp == nex)
			return (head);
	}
	return (NULL);
}
