#include "search_algos.h"
/**
 * recurs_binary - advanced_binary but with recursion
 * @array: the index to the first array
 * @size: the size of the array
 * @value: the value to be searched
 * @l: the left bound
 * @r: the upper bound
 * Return: the index of the value if found, else return -1
 */
int recurs_binary(int *array, size_t size, int value, size_t l, size_t r)
{
	size_t m, i, result, t;

	m = 0;
	if (r >= l)
	{
		printf("Searching in array: %d", array[l]);
		for (i = l + 1; i <= r; i++)
		{
			printf(", %d", array[i]);
		}
		printf("\n");
		t = l + r;
		m = t / 2;
		if (r - l == 1 && array[m] == value)
			return (m);
		if (array[m] >= value)
			result = recurs_binary(array, size, value, l, m);
		else if (array[m] < value)
			result = recurs_binary(array, size, value, m + 1, r);
		else if (array[m] == value)
				return (m);
		else
			return (-1);
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
	return (recurs_binary(array, size, value, l, r));
}
