#include "variadic_functions.h"
void print_char(va_list ar)
{
	char var;
	
	var = va_arg(ar, int);
	printf("%c",var);
}
void print_int(va_list ar)
{
	int var;

	var = va_arg(ar, int);
	printf("%d",var);
}
void print_float(va_list ar)
{
	float var;

	var = va_arg(ar, double);
	printf("%f",var);
}
void print_string(va_list ar)
{
	char *var;

	var = va_arg(ar, char *);
	if (var == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s",var);
}
void print_all(const char * const format, ...)
{
va_list args;

int i = 0, j = 0;

char *separator = "";

print_t funcs[] = {
{"c", print_char},
{"i", print_int},
{"f", print_float},
{"s", print_string}
};

va_start(args, format);

while (format && (*(format + i)))
{
j = 0;

while (j < 4 && (*(format + i) != *(funcs[j].id)))
j++;

if (j < 4)
{
printf("%s", separator);
funcs[j].print(args);
separator = ", ";
}

i++;

}

printf("\n");

va_end(args);
}
