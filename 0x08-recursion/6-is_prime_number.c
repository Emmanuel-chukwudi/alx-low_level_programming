#include "main.h"

/**
 * is_prime - divide recursively by higher divisor, but skip even num
 * @n: number to work with
 * @divisor: divider
 * Return: 1 if prime, 0, if even
 */

int is_prime(int n, int divisor)
{
	if (n == divisor)
	{
		return (1);
	}
	if (n % divisor == 0)
	{
		return (0);
	}
	return (is_prime(n, divisor + 1));
}

/**
 * is_prime_number - check for prime numbers
 * @n: number
 * Return: 1 for prime, 0 if not
 */

int is_prime_number(int n)
{
	int divisor = 3;

	if ((n % 2 == 0) || (n < 2))
	{
		return (0);
	}
	if (n == 2)
	{
		return (1);
	}
	return (is_prime(n, divisor));
}
