#include "variadic_functions.h"
/**
 * print_strings - it prints all given strings
 * @separator: the separator that separates strings
 * @n: the number of strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	char *i;
	unsigned int j = 0;

	va_start(ap, n);
	for (i = va_arg(ap, char *); j < n; i = va_arg(ap, char *))
	{
		if (i == NULL)
			printf("(nil)");
		else
			printf("%s", i);
		if (separator != NULL && j + 1 < n)
			printf("%s", separator);
		if (j + 1 == n)
			printf("\n");
		j++;
	}
	va_end(ap);
}
