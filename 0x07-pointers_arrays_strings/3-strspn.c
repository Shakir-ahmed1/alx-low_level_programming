#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: the full string
 * @accept: the prifix substring
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, count = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(accept + j) == *(s + i))
			{
				count += 1;
				break;
			}
		}
		if ( *(accept + j) == '\0')
		{
			break;
		}
	}
	return (count);
}
