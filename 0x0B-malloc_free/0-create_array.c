#include <stdlib.h>
#include "main.h"
/**
 * create_array - it creates an array with a given size initialized with
 * a given character
 * @size: the size of the array
 * @c: the filler character
 * Return: 0 if null or size = 0
 * and returns the address of the array if everything is fine
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ch;

	if (size <= 0)
		return (NULL);
	ch = malloc(sizeof(char) * size);

	if (ch == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ch[i] = c;

	return (ch);
}
