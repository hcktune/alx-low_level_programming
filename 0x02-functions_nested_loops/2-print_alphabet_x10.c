#include "main.h"

/**
 * print_alphabet_x10 -  prints 10 times the alphabet in lowercase.
 *
 * Output: abcdefghij
 */

void print_alphabet_x10(void)
{
	int i;

	for (i = 0 ; i <= 9 ; i++)
	{
		for (j = 'a' ; j <= 'z' ; i++)
		{
			_putchar(j);
		}

		_putchar('\n');
	}

}
