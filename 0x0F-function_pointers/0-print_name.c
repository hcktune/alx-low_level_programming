#include "func_ptr.h"

/**
 * print_name - output the name
 * @name: func's name
 * @f: func's pointer
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if ((name != NULL) && (f != NULL))
		f(name);
}
