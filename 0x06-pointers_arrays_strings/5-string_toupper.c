#include "main.h"
/**
 * string_toupper - converts lower cases to upper case
 * @a: the address of a string
 * Return: the string in upper case
 */
char *string_toupper(char *a)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] >= 'a' && a[i] <= 'z')
		{
			a[i] = a[i] - 32;
		}
	}
	return (a);
}
