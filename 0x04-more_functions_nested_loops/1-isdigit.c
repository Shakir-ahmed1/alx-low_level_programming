#include "main.h"
/**
 * _isdigit - checks if a character is a character is a digit 
 * @c: the character
 * Return: 0 if not digit 1 if digit
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
