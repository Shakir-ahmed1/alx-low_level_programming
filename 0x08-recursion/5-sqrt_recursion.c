#include "main.h"
int _sqrt(int,int);
/**
 * _sqrt_recursion - it finds a square root of a number
 * @n: the input number
 * Return: the sqrt of the given number if positive , -1 if the number is -ve
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 0));
}

/**
 * _sqrt - it finds a square root of a number
 * @n: the number
 * @x: the sqrt searcher
 * Return: the sqrt if n = x * x, else coninues to search
 */
int _sqrt(int n, int x)
{
	if (n == x * x)
		return (x);
	else if (n < x * x)
		return (-1);
	else
		return (_sqrt(n, x + 1));
}
