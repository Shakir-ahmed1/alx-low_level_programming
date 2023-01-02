#include "main.h"
/**
 * _strstr - it locates a substring
 * @haystack: the string
 * @needle: the substring to be searched
 * Return: returns the string starting from the searched string
 */
char *_strstr(char *haystack, char *needle)
{
int i,j;

for (i = 0; *(haystack + i) != '\0'; i++)
{
if (*(haystack + i) == *(needle))
{
for ( j = 0; *(needle + j) != '\0'; j++)
{
if (*(needle + j) != *(haystack + i + j))
{
break;
}
}
}
if (*(needle + j) == '\0')
{
return (haystack + i);
}
}
return (0);
}
