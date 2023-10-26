#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: number
 * @index: index of the value
 * Return: 1 if it worked, or -1 if an error 
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int toggle;

	if (sizeof((*n)) * 8 < index)
		return (-1);

	toggle = 1 << index;
	*n |= toggle;
	return (1);
}
