#include <stdio.h>
/**
 * main - it multiplies two numbers
 * @argc: the argument size
 * @argv: the address to the first string
 */
int main(int argc,int **argv)
{
	if (argc == 3)
	{
		printf("%d", *argv[1] * *argv[2]);
		return (0);
	}
	else
	{
		printf("Error");
		return (1);
	}
	return (0);
}
