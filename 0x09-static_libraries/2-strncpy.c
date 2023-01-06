#include "main.h"
/**
 * _strncpy - it copies a string
 * @dest: the destination address
 * @src: the source address
 * @n: the limit of copying string
 * Return: the address of the copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
int i, j = 0;


for (i = 0; i < n; i++)
{
if (*(src + i) != '\0')
{
dest[i] = src[i];
}
else
{
j = 1;
}
if (j == 1)
{
*(dest + i) = '\0';
}

}
return (dest);
}
