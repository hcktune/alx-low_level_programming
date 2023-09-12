#include <unistd.h>

/**
 * _putchar - output one character based on ASCII code given
 * @c: The character 
 * 
 * Return: if success 1
 * otherwise -1
 */

/**
 * print_alphabet - print from alphabet 'a' to 'z' using for loop
 *
 * Output: abcdefghijklmnopqrstuvwxyz
 */

int _putchar(char c)
{
	return (write(1,&c,1));
}

void print_alphabet(void)
{
	int i;

	for (i = 'a' ; i <= 'z' ; i++)
	{
		_putchar(i);
	}
	
	_putchar('\n');
}
