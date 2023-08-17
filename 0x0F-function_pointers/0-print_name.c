#include "function_pointers.h"

/**
 * print_name - prints a name.
 * @name: the name to prints
 * @f: the function to enter
 */
void print_name(char *name, void (*f)(char *))
{
	void (*ptr_f)(char *);

	ptr_f = f;
	ptr_f(name);
}
