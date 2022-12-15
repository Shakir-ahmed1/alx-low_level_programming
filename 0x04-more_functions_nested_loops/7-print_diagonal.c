#include "main.h"
/**
 * print_diagonal - it prints a diagonal line with n length
 * @n: the length of the the diagonal line
 * Return: always 0
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	}

}
