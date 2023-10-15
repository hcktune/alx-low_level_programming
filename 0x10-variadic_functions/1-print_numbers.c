#include "variadic_functions.h"

/**
 * print_numbers - output numbers in the params
 * @separator: char or stirng to be printed between numbers
 * @n: numbers count
 * Return - void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;

	va_list number;

	va_start(number, n);

	while (i++ < n)
	{
		printf("%d", va_arg(number, int));

		if (separator != NULL && (i < n)) /* for not printing the last separator */
			printf("%s", separator);
	}

	printf("\n");
	va_end(number);
}
