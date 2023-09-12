#include "search_algos.h"
/**
 * exponential_search - exponential searching algorithm implementation
 * @array: the index to the first array
 * @size: the size of the array
 * @value: the value to be searched
 * Return: the index of the value if found, else return -1
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t low, high, l, r, m, i;

	if (array == NULL || size == 0)
		return (-1);
	i = 1;
	while (array[i] < value && i < size)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i = i * 2;
	}
	low = i / 2;
	if (size - 1 < i)
		high = size - 1;
	else
		high = i;
	printf("Value found between indexes [%ld] and [%ld]\n", low, high);


	l = low;
	r = high;
	while (l <= r)
	{
		printf("Searching in array: %d", array[l]);
		for (i = l + 1; i <= r; i++)
		{
			printf(", %d", array[i]);
		}
		printf("\n");
		m = (l + r) / 2;
		if (array[m] > value)
			r = m - 1;
		else if (array[m] < value)
			l = m + 1;
		else
			return (m);
	}
return (-1);

}

