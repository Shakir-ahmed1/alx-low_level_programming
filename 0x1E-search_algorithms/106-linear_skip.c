#include <stdlib.h>
#include <math.h>
#include "search_algos.h"
/**
 * linear_skip - a jump search with express lane in the linked list
 *
 * @list: Pointer to the first element in the linked list
 * @value: the value to be searched
 *
 * Return: A pointer to the linked list that mathces with the value
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *lb, *ub;

	lb = list;
	ub = list;
	if (list == NULL)
		return (NULL);

	while (value > ub->n && ub != NULL)
	{
		lb = ub;
		if (ub->express == NULL)
		{
			while (ub->next != NULL)
				ub = ub->next;
			break;
		}
		else
		{
			ub = ub->express;
		}
		printf("Value checked at index [%ld] = [%d]\n", ub->index, ub->n);
	}
	printf("Value found between indexes [%ld] and [%ld]\n", lb->index, ub->index);
	while (lb != ub->next)
	{
		printf("Value checked at index [%ld] = [%d]\n", lb->index, lb->n);
		if (lb->n == value)
			return (lb);
		lb = lb->next;
	}
	return (NULL);
}

