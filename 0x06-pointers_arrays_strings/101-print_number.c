#include "main.h"
#include <stdio.h>
/**
 * print_number - prints integer using putchar only
 * @n: the integer to be printered
 */
void print_number(int n)
{
	int i, j, length = 0;
	unsigned int k, num, num1;
	
	if (n < 0)
	{
		_putchar('-');
		num = -1 * n;
	}
	else
	{
	num = n;
	}
	num1 = num;
	for (i = 0; num >= 10; i++)
	{
		num = num / 10;
	}
	length = i;
	num = num1;
	for (j = 0; j < length; j++)
	{
		k = 1;
		for (i = 0; i < length - j; i++)
		{
			k = k * 10;
		}
		_putchar('0' + num / k);
		num = num - k * (num / k);
	}
	_putchar('0' + num % 10);
}
