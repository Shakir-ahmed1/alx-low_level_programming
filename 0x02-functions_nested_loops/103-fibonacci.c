#include<stdio.h>
/**
 * main - prints the sum of even favonacci series
 * Return: always true
 */
int main(void)
{
	int i, j, k, l;

	i = 0;
	k = 1;
	j = 1;
	while (j <= 4000000)
	{
		l = j;
		j += k;
		k = l;
		if (j % 2 == 0)
		{
			i += j;
		}
	}
	printf("%d\n", i);
	return (0);
}
