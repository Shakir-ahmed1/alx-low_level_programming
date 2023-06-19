#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdarg.h>
#include <stdio.h>
#include <string.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
/**
 * struct print_s - prints the given function
 * @id: the id of the function
 * @print: the function to be called
 *
 * Description: a struct for printing multiple arguments
 */
typedef struct print_s
{
	char id;
	void (*print)(va_list a);
} print_t;
#endif
