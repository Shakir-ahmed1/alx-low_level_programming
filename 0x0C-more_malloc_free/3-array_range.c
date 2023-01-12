#include "main.h"
#include <stdlib.h>
/**
 * array_range - created a range of numbers from min to max in to an array
 * @min: the minimum number
 * @max: the maximum number
 * Return: NULL if min > max or malloc fails, otherwise returns the address
 * of the array
 */
int *array_range(int min, int max)
{
	int i;
	int *mc;

	if (min > max)
		return (NULL);
	mc = malloc((max - min + 1) * sizeof(int));
	if (mc == NULL)
		return (NULL);
	for (i = 0; i <= max - min + 1; i++)
		mc[i] = min + i;
	return (mc);
}
