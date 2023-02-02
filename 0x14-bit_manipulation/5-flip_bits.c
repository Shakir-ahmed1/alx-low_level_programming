#include "main.h"
#include <stdio.h>
/**
 * flip_bits - returns the number of bits you would need to 
 * flip to get from one number to another.
 * @n: first number
 * @m: second number
 * Return: the amount of bits needs to be filped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;

	while (n | m)
	{
		count = count + ((n & 1) ^ (m & 1));
		n = n >> 1;
		m = m >> 1;
	}
	return count;
}
