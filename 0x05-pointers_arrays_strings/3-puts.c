#include "main.h"
/**
 * _puts - prints characters
 * @str: the stfffring to be printed
 */
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str++);
}
_putchar(' ');
}

