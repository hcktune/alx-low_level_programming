#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: character
 * Return: 1 if upper, otherwise 0
 */

int _isupper(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
