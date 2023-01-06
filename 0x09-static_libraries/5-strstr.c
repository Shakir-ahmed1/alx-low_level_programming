#include <stdio.h>
/**
 * _strstr - it locates a substring
 * @haystack: the string
 * @needle: the substring to be searched
 * Return: returns the string starting from the searched string
 */
char *_strstr(char *haystack, char *needle)
{
int i;

if (*needle == 0)
return (haystack);

while (*haystack)
{
i = 0;

if (haystack[i] == needle[i])
{
do {
if (needle[i + 1] == '\0')
return (haystack);
i++;
} while (haystack[i] == needle[i]);
}
haystack++;
}
return ('\0');
}
