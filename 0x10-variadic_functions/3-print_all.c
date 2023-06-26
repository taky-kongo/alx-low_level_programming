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

	if (format == NULL)
		break;
	va_start(args, format);
	while (i < num_args)
	{
		switch (format[i])
		{
			case 'c':
			{
				printf("%c", va_arg(args, int));
				break;
			}
			case 'i':
			{
				printf("%i", va_arg(args, int));
				break;
			}
			case 'f':
			{
				printf("%f", va_arg(args, double));
				break;
			}
			case 's':
			{
				const char *str = va_arg(args, const char *);

				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				break;
			}
			default:
				break;
		}
		if ((i != num_args - 1) && ((format[i] == 's') || 
		(format[i] == 'c') || (format[i] == 'f') || (format[i] == 'i')))
			printf(", ");
		i++;
	}
	va_end(args);
	printf("\n");
}
