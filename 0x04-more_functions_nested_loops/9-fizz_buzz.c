#include<stdio.h>
/**
 * main - it prints fizz buzz
 * Return: always 0
 */
int main(void)
{
	int i;

	for (i = 0; i <= 100; i++)
	{
	if (i % 3 == 0)
	{
		printf("Fizz");
	}
	if (i % 5 == 0)
	{
		printf("Buzz");
	}
	if (i % 3 != 0 && i % 5 != 0)
	{
		printf("%d", i);
	}
	if (i != 100)
	{
		printf(" ");
	}
	}
	printf("\n");
}
