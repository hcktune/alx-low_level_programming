#include <stdio.h>

/**
* main - print the name of current file
* @argv: argument list
* @argc: argument count
* Return: 0
*/

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
