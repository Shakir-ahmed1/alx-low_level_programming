#include <stdlib.h>
#include <math.h>
#include "search_algos.h"
/**
 * jump_list - jump search using linked list
 *
 * @list: Pointer to the first element in the linked list
 * @size: Size of the array
 * @value: the value to be searched
 *
 * Return: A pointer to the linked list that mathces with the value
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t m, i, j, k, n;
	listint_t *temp;

	temp = list;
	if (list == NULL || size == 0)
		return (NULL);
	m = sqrt(size);
	i = 0;
	while (temp->n < value && temp->next == NULL)
	{
		if (i + m >= size - 1)
			i = size - 1;
		else
			i += m;
		for (k = 0; k < m && temp->next != NULL; k++)
			temp = temp->next;
		printf("Value checked array[%ld] = [%d]\n", i, temp->n);
	}
	printf("Value found between indexes [%ld] and [%ld]\n", i - k, i);
	temp = list;
	for (n = 0; n < i - k; n++)
		temp = temp->next;
	for (j = i - k; j < i + 1; j++)
	{
		printf("Value checked array[%ld] = [%d]\n", j, temp->n);
		if (temp->n == value)
			return (temp);
		temp = temp->next;
	}
	return (NULL);
}

