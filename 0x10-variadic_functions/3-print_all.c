#include <stdio.h>
#include <stdarg.h>
#include <string.h>

/**
 * print_all - prints anything
 *
 * @format: a list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	va_list args;
	int num_args = strlen(format);

	va_start(args, format);
	while (i < num_args)
	{
		if (format[i] == 'c')
			printf("%c", va_arg(args, int));
		if (format[i] == 'i')
			printf("%i", va_arg(args, int));
		if (format[i] == 'f')
			printf("%f", va_arg(args, double));
		if (format[i] == 's')
		{
			const char *str = va_arg(args, const char *);

			if (str == NULL)
				str = "(nil)";
			printf("%s", str);
		}
		if (i != num_args - 1)
			printf(", ");
		i++;
	}
	va_end(args);
	printf("\n");
}
