#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sums of the two diagonals of square
 * matrix of integers
 * @a: the address of integer matrix
 * @size: the size of the squeare matrix
 */
void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i + size * i];
		sum2 += a[(size - 1 - i) + size * i];
	}
	printf("%d, %d\n", sum1, sum2);
}
