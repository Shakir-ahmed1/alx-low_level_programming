#include "main.h"
/**
* _strchr - it searchs for a character in string
* @s: the string
* @c: the character to be searched
* Return: NULL if the character not found.
* the address of the first occurence if found
*/
char *_strchr(char *s, char c)
{
int i;

for (i = 0; (s[i] != c) && (s[i] != '\0'); i++);
if (s[i] == c)
	return (s + i);
else
	return (0);
}
