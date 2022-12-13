#include<main.h>
/**
 * jack_bauer - it prints the minutes of a day
 */
void jack_bauer(void)
{
	int i, j;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			putchar('0' + i / 10);
			putchar('0' + i % 10);
			putchar(':');
			putchar('0' + j / 10);
			putchar('0' + j % 10);
			putchar('\n');
		}
	}
}
