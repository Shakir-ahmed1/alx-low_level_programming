#include "main.h"
/**
 * print_last_digit - prints the last digit of the given number
 * @n: the number whom to be extracted from
 * Return: it returns the last digit of a number
 */
int print_last_digit(int n)
{
	int i;
	
	if (n < 0)
	{
		n = -n;
	}
	i = n % 10;
	if (i < 0)
	{
		i = -i;
	}
	_putchar('0' + i);
	return (i);
}
