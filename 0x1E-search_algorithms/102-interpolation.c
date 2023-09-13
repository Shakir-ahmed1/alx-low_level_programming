#include "search_algos.h"
/**
 * interpolation_search - jump searching algorithm implementation
 * @array: the index to the first array
 * @size: the size of the array
 * @value: the value to be searched
 * Return: the index of the value if found, else return -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low, high, pos;

	if (array == NULL || size == 0)
		return (-1);
	low = 0;
	high = size - 1;
	while (low <= high)
	{
		pos = low + (((double)(high - low) /
					(array[high] - array[low])) * (value - array[low]));
		if (pos >= size)
		{
			printf("value checked array[%ld] is out of range\n", pos);
			return (-1);
		}
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		if (array[pos] > value)
			high = pos - 1;
		else if (array[pos] < value)
			low = pos + 1;
	}
	if (value == array[low])
	{
		printf("Value checked array[%ld] = [%d]\n", low, array[low]);
		return (low);
	}
	return (-1);
}
