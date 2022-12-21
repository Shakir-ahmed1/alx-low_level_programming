#include "main.h"
/**
 * _strcat - it concatenates two strings
 * @dest: the destnation address
 * @src: the source address
 */
int *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; *dest != '\0'; i++)
	{
		continue;
	}

	for (j = i; *src != '\0'; j++)
	{
		*(dest + j) = *(src + j - i - 1);
	}
	
	*(dest + j) = '\0';
	return (*dest);
}
