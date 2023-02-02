#include "main.h"
/**
 * get_bit - it returns the value at the specified index
 * @n: the number
 * @index: the index
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);

	return ((n >> index) & 1);
}
