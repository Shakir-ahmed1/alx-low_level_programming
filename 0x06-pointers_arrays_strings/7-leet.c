#include "main.h"
/**
 * leet - replaces some letters to numbers
 * @a: the string to be edited
 * Return: edited string
 */
char *leet(char *a)
{
	char b[] = "aAeEoOtTlL";
	char c[] = "4433007711";
	int i, j;

	for (i = 0; a[i] != '\0'; i++)
	{
		for (j = 0; b[j] != '\0'; j++)
		{
			if (a[i] == b[j])
			{
				a[i] = c[j];
			}
		}
	}
	return (a);
}
