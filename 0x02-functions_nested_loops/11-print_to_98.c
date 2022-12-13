#include<stdio.h>
#include "main.h"
/**
 * print_to_98 - it prints numbers between the given number and 98
 * @n: starting number
 * Return: Always 0
 */
void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; i++)
	{
		printf("%d, ", i);
	}
}
