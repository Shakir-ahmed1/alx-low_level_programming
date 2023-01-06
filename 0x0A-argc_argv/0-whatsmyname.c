#include<stdio.h>
/**
 * main - prints program name
 * @argc: the size of the arguments
 * @argv: the passed arguments
 * Return: always 0
 */
int main(int argc, char **argv)
{
	(void) argc;
	printf("%s", argv[0]);
	return (0);
}
