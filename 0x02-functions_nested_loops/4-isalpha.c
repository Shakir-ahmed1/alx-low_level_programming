#include "main.h"
/**
 * _isalpha = checks if the given character is an alphabet
 * @c: the character to be checked
 * Return: 1 if it is an alphabet return 0 if it is not
 */
int _isalpha(int c)
{
	if ((c >= 97 && c < 97 + 26) && (c >= 65 || c < 65 + 26))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
