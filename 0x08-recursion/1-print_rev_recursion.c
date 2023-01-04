#include "main.h"
/**
 * _print_rev_recursion - it prints a string in reverse using _putchar
 * using recursion
 * @s: the string t be printed
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(++s);
		_putchar(*s);
	}
}
