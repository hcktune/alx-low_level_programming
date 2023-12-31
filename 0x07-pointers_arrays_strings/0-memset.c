#include "main.h"

/**
 * _memset - set constant values within memory
 * @s: starting address of memory to be filled
 * @b: const val
 * @n: the sizw of memory (number of bytes)
 * Return: pointer that points to the start of new memory set
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
