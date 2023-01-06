#include<stdio.h>
#include<stdlib.h>
/**
 * main - it prints minumum number of coins to make a change fir given money
 * @argc: the size
 * @argv: the array
 * Return: 0 if number of arguments is 1. else returns 1
 */
int main(int argc, char **argv)
{
	int cents[] = {25, 10, 5, 2, 1};
	int count = 0, i = 0, num;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);
	if (num < 0)
	{
		printf("0\n");
		return (0);
	}
	while (num != 0)
	{
		if (cents[i] <= num)
		{
			count++;
			num = num - cents[i];
		}
		else
		{
			i++;
		}
	}
	printf("%d\n", count);
	return (0);
}
