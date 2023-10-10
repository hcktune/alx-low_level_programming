#include "main.h"

/**
 * malloc_checked - check for any failure of malloc func
 * @s: size of memory (bytes)
 * Return: pointer
 */

void *malloc_checked(unsigned int s)
{
	void *p;
	
	p = malloc(s);
	
	if (p == NULL)
		exit(98);

	return (p);
}
