#include "main.h"

/**
 * is_prime_number - Find the prime number using recursive
 * @n: number to find
 * Return: 1 if prime, 0 if not found
 */

int is_prime_number(int n)
{
	return (recursive_prime_helper(n, 2));
}

/**
 * recursive_prime_helper - Find the prime number
 * @n: number to find
 * @i: number of iteration
 * Return: 1 if prime, 0 if not found
 */

int recursive_prime_helper(int n, int i)
{
	if (n < 0)
		return (0);

	else if (n == i)
		return (1);

	else if (n % i == 0)
		return (0);

	return (recursive_prime_helper(n, i++));
}
