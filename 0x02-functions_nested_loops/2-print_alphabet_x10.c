#include "main.h"
/**
 * print_alphabet_x10 - it prints alphabets 10 times
 */
void print_alphabet_x10(void)
{
	int i,j;

	for (i = 0; i < 10; i++)
	{
		for (j = 97; j < 97 + 26)
		{
			_putchar(j);
		}
	}
	_putchar('\n');
}
