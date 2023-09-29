#include "main.h"

/**
 * is_prime_number - Find the prime number using recursive
 * @n: number to find
 * Return: 1 if prime, 0 if not found
 */

int is_prime_number(int n)
{
	return (recursive_helper(n, 2);
}

/**
 * recursive_prime_helper - Find the prime numbersigr
 * @n: number to find
 * Return: 1 if prime, 0 if not found
 */

int recursive_helper(int n, int i)
{
	if (n < 0)
		return (0);
	
	else if (n % i == 0)
		return (0);

	return (recursive_helper(n, i++));
}
