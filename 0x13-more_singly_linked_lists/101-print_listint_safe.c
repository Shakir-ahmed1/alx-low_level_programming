#include "lists.h"
/**
 * print_listint_safe - it prints all elements of listint_t
 * @head: the first node
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	listint_t *new, *temp, *new2, *temp2;
	unsigned int count = 0, count2 = 0;

	new = malloc(sizeof(listint_t));
	new2 = malloc(sizeof(listint_t));
	if (new == NULL || head == NULL || new2 == NULL)
		return (0);
	temp = new;
	temp2 = new2;
	new->n = head->n;
	new->next = head->next;
	new2->n = new->n;
	new2->next = new->next;
	while (new != NULL)
	{
		count2 = 0;

		new2 = temp2;
		while (new->next != new2->next)
		{
			new2 = new2->next;
			count2++;
		}
		if (count != count2)
		{
			printf("[%p] %d\n", (void *)new, new->n);
			new = new->next;
			printf("-> [%p] %d\n", (void *)new, new->n);
			head = new;
			free(temp);
			free(temp2);
			return (count);
		}
		count++;
		printf("[%p] %d\n", (void *)new, new->n);
		new = new->next;
	}
	free(temp);
	free(temp2);
	return (count);
}
