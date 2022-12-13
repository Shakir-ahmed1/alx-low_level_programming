#include "main.h"
/**
 * _islower - it checks if the character is lowercase
 * @c: The character to be checkded
 * Return: 1 if lower case and 0 if not lower case
 */
int _islower(int c)
{
	if ((c >= 97) && (c < (97 + 26)))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
