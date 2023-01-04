#include "main.h"
/**
 * _puts_recursion - it prints a string using _putchar using recursion
 * @s: the string t be printed
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
