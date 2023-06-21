#include "function_pointers.h"

/**
 * print_name - a function that prints a name.
 *
 * @name: the name to print
 * @f: a pointer function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
