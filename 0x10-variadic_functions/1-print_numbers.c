#include "variadic_functions.h"
/**
 * print_numbers - it prints numbers given through argument
 * @separator: the string that separates integers while they get printed
 * @n: the number of functions
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	int i;
	unsigned int j = 0;

	va_start(ap, n);
	for (i = va_arg(ap, int); j < n; i = va_arg(ap, int))
	{
		printf("%d", i);
		if (separator && j != n - 1)
			printf("%s", separator);
		j++;
	}
	printf("\n");
	va_end(ap);
}
