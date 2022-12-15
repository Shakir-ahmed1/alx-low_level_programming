#include "main.h"
/**
 * print_triangle - it prints a triangle using # with n length
 * @size: the length of the triangle
 * Return: always 0
 */
void print_triangle(int size)
{
	int i, j, n;

	n = size;
	if (n > 0)
	{
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (n - j - 1 > i)
			{
				_putchar(' ');
			}
			else
			{
				_putchar('#');
			}
		}
		_putchar('\n');
	}
	}
	else
	{
		_putchar('\n');
	}

}
