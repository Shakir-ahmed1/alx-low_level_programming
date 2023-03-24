#include <stdlib.h>
#include <stdio.h>
long long check_input(int *a, unsigned int b, unsigned long int c)
{
	(void) c;
	printf("hey");
	if (a[0] == 9 && a[1] == 8 && a[2] == 10 && a[3] == 24 && a[4] == 75 && b == 9)
		   {
			   puts("Congratulations, you win the Jackpot!");
			   exit(0);
		   }
}
int print_numbers(int a1, unsigned int a2)
{
	(void) a1;
	(void) a2;
    return printf("9 8 10 24 75 - 9");
}
