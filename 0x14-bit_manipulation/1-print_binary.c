#include "main.h"
#include <stdio.h>
/**
 * print_binary - it prints the given long integer as binary
 * @n: the integer to be printed in binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int a = 1;
	int i = 0;
	while ((a + (n >> 1)) <= n && n > 1)
	{
		a = a << 1;
		i++;
	}
	for (; i >= 0;i--)
	{
		if ((a & n) == 0)
			_putchar('0');
		else
			_putchar('1');
		a = a >> 1;
	}



}

