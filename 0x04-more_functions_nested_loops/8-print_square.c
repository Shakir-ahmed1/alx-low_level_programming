#include "main.h"
/**
 * print_square - it prints a square using # with n length
 * @n: the length of the square
 * Return: always 0
 */
void print_square(int n)
{
	int i, j;

	if (n > 0)
	{
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
		_putchar('#');
		}
		_putchar('\n');
	}
	}
	else
	{
		_putchar('\n');
	}

}
