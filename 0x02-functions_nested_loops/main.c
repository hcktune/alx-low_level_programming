#include <unistd.h>

/*
 * _putchar - output one character based on ASCII code given
 * @c: The character 
 * 
 * Return: if success 1
 * otherwise -1
 */

int _putchar(char c)
{
	return (write(1,&c,1));
}
