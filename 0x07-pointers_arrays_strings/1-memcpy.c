#include "main.h"
/**
 * _memcpy - copies a string with a specified length to a destination
 * @dest: the destination address
 * @src: the source address
 * @n: the length of byte to be copied
 * Return: the address of dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}

	return (dest);
}
