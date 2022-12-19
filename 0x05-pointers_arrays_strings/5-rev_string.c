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
 * rev_string - it reverses a string
 * @s: the string to be reversed
 */
void rev_string(char *s)
{
int size = _strlen(s), i;
char *s1 = NULL;

for (i = 0; i < size; i++)
{
*(s1 + i) = s[size - i - 1];
}
for (i = 0; i < size; i++)
{
s[i] = s1[i];
}
}

