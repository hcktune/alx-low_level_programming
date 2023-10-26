#include "main.h"

/**
* clear_bit - sets the value of a bit to 0 at a given index
* @n: number of bits to clear
* @index: index
* Return: 0 if successful and 1 otherwise
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int clear = ~(1 << index);

	if (index > sizeof((*n)) * 8)
		return (-1);

	*n = *n & clear;
	return (1);
}
