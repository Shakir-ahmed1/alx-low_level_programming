#include "main.h"
/**
 * get_bit - it returns the value at the specified index
 * @n: the number
 * @index: the index
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int a = 1;
	unsigned int i = 0;

	a = n;
	while (a)
	{
		a = a >> 1;
		i++;
	}
	if (index >= i)
		return (-1);
	a = 1 << index;
	a = n & a;
	if (a != 0)
		return (1);
	return (0);
}
