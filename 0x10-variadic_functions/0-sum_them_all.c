#include "variadic_functions.h"
/**
 * sum_them_all - it sums all the given arguments
 * @n: the first argument for the varidic function
 * Return: 0 if n = 0, return the sum of all given arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, j = 0;
	int sum = 0;

	if (n == 0)
		return (0);
	va_start(ap, n);
	for (i = 0; j <= n; i = va_arg(ap, int))
	{
		sum = i + sum;
		j++;
	}
	va_end(ap);
	return (sum);
}
