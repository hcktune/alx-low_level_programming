#include "main.h"

/**
 * _sqrt_recursion - return natural square root of number
 * -1 for negative or does not have a natural square root
 * @n: number to be sqrt
 * @i: number of iteration
 * Return: sqrt values otherwise -1
 */

int _sqrt_recursion(int n, int i)
{
	if (n < 0)
	{
		return (-1);
	}
	else if ((i * i) == n)
	{
		return (i);
	}
	else if ((i * i) > n)
	{
		return (-1);
	}

	return (_sqrt_recursion(n, ++i));
}
