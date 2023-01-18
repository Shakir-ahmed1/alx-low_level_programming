#include "function_pointers.h"
/**
 * print_name - it prints a given name
 * @name: the name to be printed
 * @f: the fucntion that prints the given name
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
