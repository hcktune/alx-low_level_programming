#include "main.h"

/**
 * _strchr - find a char within a string and print from that char
 * @s: string
 * @c: character that we need to find
 * Return: starting pointer
 */

char *_strchr(char *s, char c)
{
	while (*s++)
	{
		if (*s == c)
			return (s);
	}
	return (s);
}
