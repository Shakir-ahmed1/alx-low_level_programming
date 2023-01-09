#include <stdlib.h>
#include "main.h"
/**
 * argstostr - it concatinates all the arguments passed to the program
 * @ac: the length of the argument
 * @av: the string of arguments
 * Return: NULL if ac == 0 or av == NULL or if it fails
 * the address of the concatinated string
 */
char *argstostr(int ac, char **av)
{
	int i, j, k = 0;
	char *mc;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
		for (j = 0; av[i][j] != '\0'; j++)
			k++;
	mc = malloc(sizeof(char) * k + ac + 1);
	if (mc == NULL)
		return (NULL);
	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			mc[k] = av[i][j];
			k++;
		}
		mc[k] = '\n';
		k++;
		}
	return (mc);
}
