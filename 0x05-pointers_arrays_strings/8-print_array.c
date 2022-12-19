#include<stdio.h>
#include "main.h"
/**
 * print_array - it printes arrays with the specified length
 * @a: the array pointer
 * @n: the amount of integers to be printed
 */
void print_array(int *a, int n)
{
int i;

for (i = 0; i < n; i++)
{
printf("%d", *(a + i));
if (i != n - 1)
{
printf(", ");
}
}
printf("\n");
}
