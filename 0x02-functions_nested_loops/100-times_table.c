#include "main.h"
/**
 * times_table - it prints the time tables available up to nine
 */
void times_table(int n)
{
	int i, j, k;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			k = i * j;
			if (k < 10)
			{
				_putchar('0' + k);
			}
			else if (k < 100)
			{
				_putchar('0' + k / 10);
				_putchar('0' + k % 10);
			}
			else if (k <1000)
			{
				_putchar('0' + k / 100);
				_putchar('0' + (k / 10) % 10);
				_putchar('0' + k % 10);
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

