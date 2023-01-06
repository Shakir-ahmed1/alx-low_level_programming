#include<stdio.h>
/**
 * main - it prints the number of passed arguments
 * @argc: the size of the arguments passed
 * @argv: the address of the first argument
 * Return: always 0
 */
int main(int argc, char **argv)
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
