#include"main.h"
void print_alphabet(void);
/**
 * print_alphabet - prints alphabets in small letter
 */
void print_alphabet(void)
{	int i;
	for (i = 97; i < (26 + 97); i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
