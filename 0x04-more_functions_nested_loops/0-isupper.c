#include "main.h"
/**
 * _isupper - checks if a character is an uppers case
 * @c: the character
 * Return: 0 if not upper case 1 if upper case
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
