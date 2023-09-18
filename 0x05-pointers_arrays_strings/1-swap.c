#include "main.h"

/**
 * swap_int - swap two Variables
 * @a: first integer
 * @b: second integer
 * Return: swaping values
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	b = tmp;
}
