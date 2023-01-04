#include "main.h"
/**
 * factorial - returns the factorial of a given number
 * @n: the number to be factorized
 * Return: the factorial of the given number
 */
int factorial(int n)
{
	if (n == 0)
	{
		return 1;
	}
	else if (n < 0)
	{
		return -1;
	}
	return (n * factorial(n - 1));
}
