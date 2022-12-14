#include "main.h"
void number_printer(int);
/**
 * print_times_table - it prints the time tables available up to nine
 * @n: max length
 */
void print_times_table(int n)
{
	int i, j;

	if (n > 15 || n < 0)
		return;
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			number_printer(i * j);
			if (j != n)
			{
				_putchar(',');
				_putchar(' ');
				if (i * (j + 1) < 10)
				{
					_putchar(' ');
					_putchar(' ');
				}
				else if (i * (j + 1) < 100)
				{
					_putchar(' ');
				}
			}
			else
			{
				_putchar('\n');
			}
		}
	}
}
/**
 * number_printer - print the numbers
 * @num: the number to be printed
 */
void number_printer(int num)
{
	if (num < 10)
	{
		_putchar('0' + num);
	}
	else if (num < 100)
	{
		_putchar('0' + (num) / 10);
		_putchar('0' + (num) % 10);
	}
	else if (num < 1000)
	{
		_putchar('0' + (num) / 100);
		_putchar('0' + ((num) / 10) % 10);
		_putchar('0' + (num) % 10);
	}
}
