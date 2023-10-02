#include "main.h"

/**
 * _puts - print  the string provided using pointer
 * @str: points to a string
 * Return: string
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i++]);
	}
	_putchar('\n');

}
