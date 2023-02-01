
#include "lists.h"
/**
 * find_listint_loop - finds the loop in the linked list
 * @head: the first node
 * Return: the address of the start of the loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *temp = NULL;
	listint_t *nex = NULL;

	if (head == head->next)
		return(head);
	if (head == head->next->next)
		return(head->next);
	while (head != NULL)
	{
	if (head->next == NULL)
		return (NULL);
	if (head->next == temp)
		break;
	nex = head->next;
	head->next = temp;
	head = nex;
	}
	return (head);
}
