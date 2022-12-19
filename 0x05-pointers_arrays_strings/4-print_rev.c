#include "main.h"
/**
 * print_rev - it prints string in reverse
 * @s: the string
 */
void print_rev(char *s)
{
	int size = _strlen(s);

	while (size >= 0)
	{
		putchar(*(s + size));
		size--;
	}
	_putchar('\n');
}
