#include "function_pointers.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * print_name - a function that prints a name.
 *
 * @name: the name to print
 * @f: the pointer of function
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
		return;
	f(name);
}
