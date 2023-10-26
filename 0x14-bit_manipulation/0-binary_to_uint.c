#include "main.h"

/**
 * binary_to_uint - converts the binary number to a postive integers
 * @b: ptr to 0 and 1 chars
 * Return: unsigned  int number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0;

	if (b)
		return (0);

	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);

		res = res << 1;
		res = res | (*b++ - 48);
	}
	return (res);
}
