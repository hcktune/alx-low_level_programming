#include "main.h"

/**
 * print_rev - prints a string in reverse followed by a new line
 * @s: pointer that points to a string (char*)
 * Return: void
 */

void print_rev(char *s)
{
	int len = _strlen(s);

	while (s[len])
	{
		_putchar(s[len--]);
	}
	
	_putchar('\n');
}
