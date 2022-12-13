#include "main.h"
/**
 * _islower - it checks if the character is lowercase
 */
int _islower(int c)
{
	if ((c <= 97) && (c > (97 + 26)))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
