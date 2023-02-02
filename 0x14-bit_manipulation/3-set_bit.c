#include "main.h"
/**
 * set_bit - it sets the value of a bit to 1 at a given index
 * @n: the address of the integer
 * @index: the index to be modified
 * Return: 1 if it worked or -1 if an error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned a;
	if (index > 63)
		return (-1);
	a = 1 << index;
	if (((*n >> index) & 1) == 0)
		*n = *n + a;
	return (1);
}
