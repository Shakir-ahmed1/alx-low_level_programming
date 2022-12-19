#include "main.h"
/**
 * _strlen - length of a string
 * @s: the string
 * Return: length of the string
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
 * print_rev - it prints string in reverse
 * @s: the string
 */
void print_rev(char *s)
{
	int size = _strlen(s) - 1;

	while (size >= 0)
	{
		_putchar(*(s + size));
		size--;
	}
	_putchar('\n');
}
