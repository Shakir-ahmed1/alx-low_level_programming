#include "main.h"
/**
 * get_endianness - it checks endianness
 * Return: 1 if little endian, 0 if big endian
 */
int get_endianness(void)
{
	int n = 1;

	if (*(char *)&n == 1)
		return (1);
	else
		return (0);
}
