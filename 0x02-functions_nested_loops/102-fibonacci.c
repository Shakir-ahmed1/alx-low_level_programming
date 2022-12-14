#include<stdio.h>
/**
 * main - prints fabonacci series
 * Return: Always 0
 */
int main(void)
{
	int i, l, k = 1, j = 1;

	for (i = 1; i <= 50; i++)
	{
		l = j;
		printf("%d, ", j);
		j = j + k;
		k = l;
	}
	printf("%d\n", j);
	return (0);
}
