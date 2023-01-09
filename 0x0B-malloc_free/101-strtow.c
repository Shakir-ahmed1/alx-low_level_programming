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
	int i = 0, j = 0, k = 0, h = 0;
	char **mc;

	while (str[i] != '\0')
		i++;
	mc = (char **)malloc(sizeof(char *) * i);
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
		if (str[i] == '\0')
		{
			break;
		}
		mc[j] = malloc(sizeof(char) * k);
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
		i++;
		j++;
	}
	return (mc);
}
