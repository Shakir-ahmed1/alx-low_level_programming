#include "variadic_functions.h"
/**
 * print_char - prints char
 * @ar: the va_list
 */
void print_char(va_list ar)
{
	char var;

	var = va_arg(ar, int);
	printf("%c", var);
}
/**
 * print_int - prints int
 * @ar: the va_list
 */
void print_int(va_list ar)
{
	int var;

	var = va_arg(ar, int);
	printf("%d", var);
}
/**
 * print_float - prints float
 * @ar: the va_list
 */
void print_float(va_list ar)
{
	float var;

	var = va_arg(ar, double);
	printf("%f", var);
}
/**
 * print_string - prints string
 * @ar: the va_list
 */
void print_string(va_list ar)
{
	char *var;

	var = va_arg(ar, char *);
	if (var == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", var);
}
/**
 * print_all - prints all arguments passed
 * @format: the sequence of data types in string
 */
void print_all(const char * const format, ...)
{
va_list ap;

int i = 0, j = 0;

char *separator = "";

print_t func[] = {
{"c", print_char},
{"i", print_int},
{"f", print_float},
{"s", print_string}
};
va_start(ap, format);
while (format && (*(format + i)))
{
j = 0;
while (j < 4 )
{
if (func[j].id == *(format + i))
{
printf("%s",separator);
func[j].print(ap);
separator = ", ";
break;
}
j++;
}
i++;
}
printf("\n");
va_end(ap);
}
