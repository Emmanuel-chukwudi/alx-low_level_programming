#include "main.h"

/**
 * find_root - A function that returns the natural root of a number
 * @n: number
 * @root: root of the number n
 * Return: Answer, and -1 if not a natural root
 */

int find_root(int n, int root)
{
	if ((root * root) > n)
	{
		return (-1);
	}
	if ((root * root) == n)
	{
		return (root);
	}
	return (find_root(n, root + 1));
}

/**
 * _sqrt_recursion - A function that finds the natural square of n
 * @n: number
 * Return: Answer, or -1 if not a natural number
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (find_root(n, 0));
}
