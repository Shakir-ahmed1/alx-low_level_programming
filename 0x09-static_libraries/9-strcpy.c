#include "main.h"
/**
 * _strcpy - copies from sourse to destination
 * @dest: the destination
 * @src: the source
 * Return: the copied value
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = src[i];
	return (dest);
}
