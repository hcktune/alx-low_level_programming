#include "variadic_functions.h"

/**
 * print_all - print base on arguments specifiers
 * @format: list of format specifiers 
*/

void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	char *str;
	char *separator = "";
	va_list spec; /* specifier */

	va_start(spec, format);

	if (format != NULL)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", separator, (char)va_arg(spec, int);
					break;
				case 'i':
					printf("%s%d", separator, va_arg(sepc, int);
					break;
				case 'f':
					printf("%s%f", separator, va_arg(spec, double);
					break;
				case 's':
					printf("%s%s", separator, va_arg(spec, char *);
					break;
				default:
					continue;
			}
			sep = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(spec);
}
