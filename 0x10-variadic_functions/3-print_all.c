#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>
#include "variadic_functions.h"

/**
 * print_all - a function that prints anything.
 *
 * @format: a list of types of arguments passed to the function
 */
void print_all(const char *format, ...)
{
	va_list args;
	char c, *s;
	int i;
	float f;

	va_start(args, format);
	while (*format)
	{
		switch (*format++)
		{
			case 's':
				s = va_arg(args, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s", s);
				break;
			case 'c':
				c = (char)va_arg(args, int);
				printf("%c", c);
				break;
			case 'i':
				i = va_arg(args, int);
				printf("%d", i);
				break;
			case 'f':
				f = (float)va_arg(args, double);
				printf("%f", f);
				break;
		}
		if (*format)
			printf(", ");
	}
	printf("\n");
	va_end(args);
}
