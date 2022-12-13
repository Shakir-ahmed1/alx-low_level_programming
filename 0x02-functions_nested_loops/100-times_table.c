#include "main.h"
/**
 * print_times_table - it prints the time tables available up to nine
 * @n: max length
 */
void print_times_table(int n)
{
	int i, j, k;

	if (n > 15 || n < 0)
		return;
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			if (i * j < 10)
			{
				_putchar('0' + i * j);
			}
			else if (k < 100)
			{
				_putchar('0' + (i * j) / 10);
				_putchar('0' + (i * j) % 10);
			}
			else if (k <1000)
			{
				_putchar('0' + (i * j) / 100);
				_putchar('0' + ((i * j) / 10) % 10);
				_putchar('0' + (i * j) % 10);
			}
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

