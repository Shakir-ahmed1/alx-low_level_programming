#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - it concatinates two strings
 * @s1: the first string
 * @s2: the second string
 * @n: the bytes of s2 to be concatinated
 * Return: the address of the concatinated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int n1 = 0, n2 = 0, i;
	char *mc;
	
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[n1] != '\0')
		n1++;
	while (s2[n2] != '\0')
		n2++;
	if (n2 < n)
		n = n2;

	mc = malloc(sizeof(char) * (n1 + n + 1));
	if (mc == NULL)
		return (NULL);

	for (i = 0; i < n1 + n; i++)
	{
		if (i < n1)
			mc[i] = s1[i];
		else
			mc[i] = s2[i - n1];
	}
	mc[i] = '\0';
	return (mc);
}
