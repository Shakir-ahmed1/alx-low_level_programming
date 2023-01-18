#include "function_pointers.h"
/**
 * array_iterator - it executes each element of a array
 * @array: the array to be executed
 * @size: the size of the array
 * @action: the function to be executed
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	if (action != NULL && array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
