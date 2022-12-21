#include "main.h"
/**
 * _strcat - it concatenates two strings
 * @dest: the destnation address
 * @src: the source address
 * Return: the address of the concatenated string
 */
char *_strcat(char *dest, char *src)
{
int i, j;

for (i = 0; *(dest + i) != '\0'; i++)
{
continue;
}
for (j = i; *(src + j - i) != '\0'; j++)
{
*(dest + j) = *(src + j - i);
}
*(dest + j) = '\0';
return (dest);
}
