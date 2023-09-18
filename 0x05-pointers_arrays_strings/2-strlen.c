#include "main.h"

/**
 * _strlen - calculate the string length
 * @str: string
 * Return: string length = number
 */

int _strlen(char *str)
{
	int i;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
