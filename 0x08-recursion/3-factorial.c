#include "main.h"

/**
 * factorial - A function that returns the factorial of a number
 * @n: number to be used
 * Return: factorial Answer, and -1 for negative
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if ((n == 0) || (n == 1))
	{
		return (n);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
