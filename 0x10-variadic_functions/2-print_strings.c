#include "variadic_functions.h"

/**
 * print_strings - print string separated by char
 * @separator: separator between strings
 * @n: strings count
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	char *res;
	va_list string;

	va_start(string, n);

	while (i++ < n)
	{
		res = va_arg(string, char *);

		if (res == NULL)
			printf("(nil)");
		else
			printf("%s", res);
		/* end if */

		if ((i < n - 1 ) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(string);
}
