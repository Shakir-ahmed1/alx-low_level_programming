#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * strtow - it splits a string to words by using space as separator
 * @str: the string to be splited
 * Return: NULL if str is NULL or "" or if the function fails
 * other wise the array of strings
 */
char **strtow(char *str)
{
	int i = 0, j = 0, k = 0, h = 0, space = 0;
	char **mc;

	while (str[i] != '\0')
	{
		i++;
		if (str[i] == ' ')
			space++;
	}
	if(*str == '\0')
		return (NULL);
	mc = (char **)malloc(sizeof(char *) * space - 1);
	if (mc == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		k = 0;
		while (str[i] != ' ' && str[i] != '\0')
		{
			k++;
			i++;
		}
		if (str[i] == ' ' && k == 0)
		{
			i++;
			continue;
		}
		mc[j] = malloc(sizeof(char) * k - 1);
		if (mc[j] == NULL)
		{
			while (i)
			{
				free(mc[j]);
				i--;
			}
			free(mc);
			return (NULL);
		}
		for (h = 0; h < k; h++)
			mc[j][h] = str[i - k + h];

		if (str[i] == '\0')
			break;
		i++;
		j++;
	}
	return (mc);
}
