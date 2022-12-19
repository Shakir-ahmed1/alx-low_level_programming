#include "main.h"
/**
 * puts2 - it prints half of the string
 * @str: the string to be printed
 */
void puts2(char *str)
{
while (*str != '\0')
{
_putchar(*str++);
if (*str++ != '\0')
{
	continue;
}
else
{
	break;
}
}
_putchar('\n');
}
