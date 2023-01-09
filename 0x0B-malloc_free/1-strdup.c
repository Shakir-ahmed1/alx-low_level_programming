#include<stdlib.h>
/**
 * _strdup - it copies a given string to a new allocated memory
 * @str: the string to be copied
 * Return: NULL if str=NULL or in insufficient memory available,
 * new pointer if success
 */
char *_strdup(char *str)
{
	int i = 0;
	char *ms;

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
		i++;
	ms = malloc(sizeof(char) * i + 1);
	for (i = 0; str[i] != '\0'; i++)
		ms[i] = str[i];
	if (ms == NULL)
		return (NULL);
	return (ms);
}
