#include "main.h"
/**
 * _pow_recursion - it raizes x by y
 * @x: the number to be raiszed
 * @y: the power
 * Return: the result
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	y--;
	return (x * _pow_recursion(x, y));
}
