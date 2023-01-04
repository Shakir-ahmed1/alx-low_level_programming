#include "main.h"
#include <stdio.h>
int _prime(int, int);
/**
 * is_prime_number - checks if the number is prime number
 * @n: the number to be checked
 * Return: 1 if prime, else 0
 */
int is_prime_number(int n)
{
	if (n == 1)
	{
		return 0;
	}
	else
	{
	return (_prime(n, 1));
	}
}
/**
 * _prime - checks if the number is prime
 * @n: the number
 * @x: the checker
 * Return: returns 1 if prime, else 0
 */
int _prime(int n, int x)
{
	if (n < 0)
	{
		return (0);
	}
	if (x == n)
	{	
		return (1);
	}
	else if (n % x == 0 && x != 1)
	{
		return (0);
	}
	else
	{
		return (_prime(n,x+1));
	}
}
