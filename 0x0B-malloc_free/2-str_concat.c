#include <stdlib.h>
/**
 * str_concat - it returns the concatinated address of the given strings
 * @s1: string 1
 * @s2: string 2
 * Return: NULL on failure, else the address of the joined string
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, k;
	char *mc;

	while(s1[i] != '\0')
		i++;
	while(s2[j] != '\0')
		j++;
	mc = malloc(sizeof(char) * i + j);

	if (mc == NULL)
		return (NULL);
	for (k = 0; k < i + j; k++)
	{
		if (k < i)
			mc[k] = s1[k];
		else
			mc[k] = s2[k - i];
	}
	return (mc);
}
