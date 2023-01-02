#include "main.h"
/**
 * _memset - it fills the given memory with a constant byte
 * @s: the string to be filled
 * @b: the constant byte
 * @n: the length of bytes to be filled
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
