#include "main.h"
#include <stdio.h>
/**
 * _realloc - it realocates the memory of a pointer with the specified length
 * @ptr: the pointer to be realocated
 * @old_size: the size of the pointer
 * @new_size: the new size of ptr
 * Return: NULL, ptr, the new allocated pointer uninitialized and initialized
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *mc;
	unsigned int i;

	if (ptr == NULL)
	{
		mc = malloc(new_size);
		return (mc);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);
	mc = malloc(new_size * sizeof(int));
	if (mc == NULL)
		return (NULL);
	if (new_size > old_size)
	{
		free(ptr);
		return (mc);
	}
	for (i = 0; i < new_size; i++)
		*((char *) mc + i) = *((char *) ptr + i);
	free(ptr);
	return (mc);
}

