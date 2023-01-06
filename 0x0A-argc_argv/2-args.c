#include <stdio.h>
/**
 * main - it prints the argument passed to the program
 * argc - the number of arguments
 * argv - the address to the first argument
 * Return - always 0
 */
int main(int argc, char **argv)
{
	int i;
	
	(void) argc;
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
