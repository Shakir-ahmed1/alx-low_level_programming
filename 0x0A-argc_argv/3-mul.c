#include <stdio.h>
#include <stdlib.h>
/**
 * main - it multiplies two numbers
 * @argc: the argument size
 * @argv: the address to the first string
 * Return: if supplied two integer arguments 0, 1 if not
 */
int main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
