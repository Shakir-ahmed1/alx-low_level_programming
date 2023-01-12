#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - it allocates memory using malloc
 * @b: the size of the malloc
 * Return: the obtained address of the malloc, otherwise terminate with
 * status value of 98 .
 */
void *malloc_checked(unsigned int b)
{
	void *mc;

	mc = malloc(b);
	if (mc == NULL)
	{
		exit(98);
	}
	return (mc);
}
