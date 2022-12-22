#include "main.h"
/**
 * print_number - prints integer using putchar only
 * @n: the integer to be printered
 */
void print_number(int n)
{
	int i, j, num, k, length = 0;
	
	num = n;
	if (num < 0)
	{
		_putchar('-');
		num *= -1;
		n *= -1;
	}
	for (i = 0; num >= 10; i++)
	{
		num = num / 10;
	}
	length = i;
	num = n;
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
	_putchar('0' + n % 10);
}
