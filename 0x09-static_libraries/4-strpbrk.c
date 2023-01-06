#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: the main string
 * @accept: the substring to be indexed
 * Return: the string including the first occurance of the substring
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(accept + j) == *(s + i))
			{
				break;
			}
		}
		if (*(accept + j) != '\0')
		{
			return (s + i);
		}
	}

	return (0);
}
