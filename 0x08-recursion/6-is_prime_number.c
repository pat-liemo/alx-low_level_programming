#include "main.h"

/**
 * is_prime- returns the 1 if n is prime
 * @n: number to be checked
 * @c: iterator
 *
 * Return: 1 if n is prime, 0 otherwise
 */

int is_prime(unsigned int n, unsigned int c)
{
	if (n % c == 0)
	{
		if (n == c)
			return (1);
		else
			return (0);
	}
	return (0 + is_prime(n, c + 1));
}

/**
 * is_prime_number- detects if an input is prime
 * @n: input number
 * Return: 1 if n is prime, 0 otherwise
 */

int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	else if (n < 0)
		return (0);
	else if (n == 1)
		return (0);
	return (is_prime(n, 2));
}
