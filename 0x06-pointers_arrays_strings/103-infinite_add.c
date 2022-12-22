#include "main.h"
/**
 * infinite_add - it adds two large numbers
 * @n1: first number
 * @n2: second number
 * @r: result for string
 * @size_r: the size of r
 * Return: the result if success 0 if fail
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i;

	for (i = 0; i < size_r; i++)
	{
		n1[i] = n2[i];
		n2[i] = r[i];
	}
	return (0);
}
