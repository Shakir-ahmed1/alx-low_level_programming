#include "function_pointers.h"
/**
 * int_index - it searches an integer in the given array
 * @array: the array of integers
 * @size: the size of the array
 * @cmp: the searching function
 * Return: int_index returns the index of the first element
 * for which the cmp function does not return 0
 * If no element matches, return -1
 * If size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp != NULL && size > 0 && array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
