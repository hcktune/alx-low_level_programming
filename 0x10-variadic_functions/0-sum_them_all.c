#include "variadic_functions.h"

/**
 * sum_them_all - sum all parameteres 
 * @n: number of args (n1, n2, n3, ....) 
 * Return: int 
*/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int res = 0;
	va_list nbs; /* numbers */

	if (n == 0)
		return (0);

	va_start(nbs, n);

	while((i++) < n)
		res += va_arg(nbs, int);
	
	return (res);
}
