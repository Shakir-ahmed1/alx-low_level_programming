#include "main.h"
/**
 * print_line - it prints a line with n length
 * @n: the length of the line
 * Return: always 0
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	}
	_putchar('\n');

}
