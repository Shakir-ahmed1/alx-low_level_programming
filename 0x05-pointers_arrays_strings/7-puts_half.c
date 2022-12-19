#include "main.h"
/**
 * _strlen - returns the length of the given string
 * @s: the string to be reversed
 * Return: the length of the string
 */
int _strlen(char *s)
{
int i = 0;

while (*s != '\0')
{
i++;
s++;
}
return (i);
}

/**
 * puts_half - it prints half of the string
 * @str: the string to be printed
 */
void puts_half(char *str)
{
int i = 0, size = _strlen(str);
while (*str != '\0')
{
if (i >= size / 2 && size % 2 == 0)
{
putchar(*str++);
}
else if (i > (size - 1) / 2 && size % 2 == 1)
{
putchar(*str++);
}
else
{
*str++;
}
i++;
}
}
