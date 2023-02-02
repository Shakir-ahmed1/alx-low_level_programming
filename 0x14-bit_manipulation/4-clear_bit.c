#include "main.h"
/**
 * clear_bit - it sets the vlue of a bit to 0 at a given index
 * @n: the number
 * @index: the index of the number
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int a;

	if (index > 63)
		return (-1);

	a = 1 << index;
	if (((*n >> index) & 1) != 0)
		*n = *n - a;
	return (1);
}
