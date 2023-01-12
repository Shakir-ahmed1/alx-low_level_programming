#include "main.h"
#include <stdlib.h>
/**
 * _calloc - it allocates memory of an array
 * @nmemb: number of elements
 * @size: the size of each element
 * Return: NULL if fail or if either nmemb or size are zero otherwise
 * returns the address of the new create array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *mc;
	int i;
	if (nmemb == 0 || size == 0)
		return (NULL);

	mc = malloc(size * nmemb);
	if (mc == NULL)
		return (NULL);
	for (i = 0; i < (int) nmemb; i++)
		mc[i] = 0;
	return (mc);
}
