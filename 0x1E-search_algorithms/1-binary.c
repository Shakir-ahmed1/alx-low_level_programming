#include "search_algos.h"
/**
 * binary_search - linear searching algorithm implimentation
 * @array: the index to the first array
 * @size: the size of the array
 * @value: the value to be searched
 * Return: the index of the value if found, else return -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t l, r, m, i;

	if (array == NULL)
		return (-1);
	l = 0;
	r = size - 1;
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
