#include <limits.h>
#include "main.h"
/**
 * print_last_digit - prints the last digit of the given number
 * @n: the number whom to be extracted from
 * Return: it returns the last digit of a number
 */
int print_last_digit(int n)
{
	int i;

	n = (int) n;
	if (n == INT_MIN)
	{
		n = 8;
	}
	else if (n < 0)
	{
		n = -n;
	}
	i = n % 10;
	_putchar('0' + i);
	return (i);
}
