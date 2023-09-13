#include "search_algos.h"
int spliter(int *array, size_t size, int value, size_t l, size_t r)
{
	size_t m, i, result;
	if (r >= l)
	{
		printf("Searching in array: %d", array[l]);
		for (i = l + 1; i <= r; i++)
		{
			printf(", %d", array[i]);
		}
		printf("\n");
		m = (l + r) / 2;
		if (array[m] > value)
			result = spliter(array, size, value, l, m - 1);
		else if (array[m] < value)
			result = spliter(array, size, value, m + 1, r);
		else
			return (m);
		return (result);
	}
	return (-1);
}
/**
 * advanced_binary - binary searching algorithm but with first occurence of
 * the value implimentation
 * @array: the index to the first array
 * @size: the size of the array
 * @value: the value to be searched
 * Return: the index of the value if found, else return -1
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t l, r;

	if (array == NULL)
		return (-1);
	l = 0;
	r = size - 1;
	return (spliter(array, size, value, l, r));
}
