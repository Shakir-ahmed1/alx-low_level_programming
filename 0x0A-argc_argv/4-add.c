#include <stdio.h>
#include <stdlib.h>
/**
 * main - it adds give integers
 * @argc: the number of arguments
 * @argv: the address of the first argument
 * Return: 0 if all given arguments are numbers, 1 if the given arguments
 * contain non number value
 */
int main(int argc, char **argv)
{
	int i, k, sum, j = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < 48 || argv[i][j] > 57)
			{
				break;
			}
		}
		if (argv[i][j] != '\0')
		{
			break;
		}
	}
	for (k = 1; k < argc; k++)
	{
		sum = sum + atoi(argv[k]);
	}

	if (argv[argc - 1][j] != '\0' && argc > 1)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", sum);
	}

	return (0);
}
