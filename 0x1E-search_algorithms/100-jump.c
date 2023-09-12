#include "search_algos.h"
#include <math.h>
/**
 * jump_search - jump searching algorithm implimentation
 * @array: the index to the first array
 * @size: the size of the array
 * @value: the value to be searched
 * Return: the index of the value if found, else return -1
 */
int jump_search(int *array, size_t size, int value)
{
	int m, i, j;

	m = sqrt(size);
	i = 0;
	do {
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		i += m;
	} while (array[i] < value && i <= (int) size);
	printf("Value found between indexes [%d] and [%d]\n", i - m, i);
	for (j = i - m; j < i + 1 && j < (int) size; j++)
	{
		printf("Value checked array[%d] = [%d]\n", j, array[j]);
		if (array[j] == value)
			return (j);
	}
	return (-1);
}