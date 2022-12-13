#include "main.h"
/**
 * times_table - it prints the time tables available up to nine
 */
void times_table(void)
{
	int i, j, k, l, m;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			k = i * j
			len = sizeof(k) / 4;
			if (len == 1)
			{
				putchar('0' + k);
			}
			else if (len == 2)
			{
				_putchar('0' + k / 10);
				_putchar('0' + k % 10);
			}
			if (j != 9)
			{
				_putchar(',');
			}
			else
			{
				_putchar('\n');
			}
		}
	}
}

