#include "main.h"

/**
* print_binary - print binary using bitwise operator
* @n: number to print to binary
*/

void print_binary(unsigned long int n)
{
	if (n == 0)
		putchar('0');
	else
		bin_helper(n);
}

/**
* bin_helper - recursively print binary
* @n: number to print to binary
*/

void bin_helper(unsigned long int n)
{
	if (n > 1)
		bin_helper(n >> 1);
	putchar((n & 1) + '0');
}
