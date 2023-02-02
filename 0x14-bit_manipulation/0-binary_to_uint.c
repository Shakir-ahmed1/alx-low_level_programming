#include "main.h"
/**
 * binary_to_uint - it convertes binary to integer
 * @b: the binary string
 * Return: the converted integer
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, j = 0, k = 0;
	if (b == NULL)
		return (0);
	while (b[j] != '\0')
	{
		j++;
	}
	j--;
	for (; j != 0; j--)
	{
		if (b[j] == '0')
		{
			k++;
			continue;
		}
		else if (b[j] == '1')
		{
			i = i + (1 << k);
		}
		else
		{
			return (0);
		}
		k++;
	}
	return (i);
}
