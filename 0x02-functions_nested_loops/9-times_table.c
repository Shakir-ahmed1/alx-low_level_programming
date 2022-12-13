#include "main.h"
/**
 * times_table - it prints the time tables available up to nine
 */
void times_table(void)
{
	int i, j, k;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			k = i * j;
			if (k < 10)
			{
				_putchar('0' + k);
			}
			else if (k >= 10)
			{
				_putchar('0' + k / 10);
				_putchar('0' + k % 10);
			}
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
				if (i * (j + 1) < 10)
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

