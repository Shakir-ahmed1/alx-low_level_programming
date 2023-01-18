#include "3-calc.h"
/**
 * main - entry point
 * @argc: the size of the argument
 * @argv: the array of strings passed to the program
 * Return: always 0
 */
int main(int argc,char **argv)
{
	if (argc != 4)
	{
		printf("Error");
		exit(98);
	}
	if ((*argv[2] == '/' && atoi(argv[3]) == 0) ||
		       (*argv[2] == '%' && atoi(argv[3]) == 0))
	{
		printf("Error");
		exit(100);
	}

	if (get_op_func(argv[2]) == NULL || argv[2][1] != '\0')
	{
		printf("Error");
		exit(99);
	}
	printf("%d\n",get_op_func(argv[2])(atoi(argv[1]),atoi(argv[3])));
	return (0);

}
