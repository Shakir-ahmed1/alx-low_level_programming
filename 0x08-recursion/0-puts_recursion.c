#include "main.h"
/**
 * _puts_recursion - it prints a string using _putchar using recursion
 * @s: the string to be printed
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
	else
	{
		_putchar('\n');
	}
}
