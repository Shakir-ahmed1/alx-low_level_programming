#include<stdio.h>
/**
 * main - prints fabonacci series
 * Return: Always 0
 */
int main(void)
{
	long int i, l, k = 1, j = 1;

	for (i = 1; i <= 50; i++)
	{
		l = j;
		printf("%ld, ", j);
		j = j + k;
		k = l;
	}
	printf("\n");
	return (0);
}
