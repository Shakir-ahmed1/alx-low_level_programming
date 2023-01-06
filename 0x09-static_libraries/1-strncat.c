#include "main.h"
/**
 * _strncat - it concatenates two strings with the specified length
 * @dest: the destination address
 * @src: the address of the source
 * @n: the max length of the string
 * Return: the address of the concatinated string
 */
char *_strncat(char *dest, char *src, int n)
{
int i, j;

for (i = 0; *(dest + i) != '\0'; i++)
{
continue;
}
for (j = i; *(src + j - i) != '\0' && j - i < n; j++)
{
*(dest + j) = *(src + j - i);
}
*(dest + j) = '\0';
return (dest);
}
