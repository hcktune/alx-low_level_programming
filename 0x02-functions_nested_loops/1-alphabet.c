#include "main.h"

/*
 * print_alphabet: print all lowercase alphabet by order from 'a' ==> 'z' 
 * 
 * Output: abcdefghijqlmnopqrstuvwxyz
 */

void print_alphabet(void)
{
	int i;

	for (i = 'a' ; i <= 'z' ; i++)
	{
		_putchar(i);
	}

	_putchar('\n');
}
