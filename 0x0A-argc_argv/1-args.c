#include <stdio.h>
/**
 * main - print the number of argc argument
 * @argc: argument number
 * @argv: argument list
 * Return: Always 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", --argc);
	return (0);
}
