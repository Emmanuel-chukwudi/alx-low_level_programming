#include "main.h"

/**
 * print_number - a function that prints an integer
 * @n: integer
 * Return: Always 0 (Success)
 */

void print_number(int n)
{
	unsigned int a = 10, b;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	b = n;
	if (b < a)
	{
		_putchar('0' + b);
	}
	else
	{
		while (b >= a)
		{
			a *= 10;
			if (a >= 1000000000)
			if (a == 1000000000)
				break;
		}
		if (!(a >= 1000000000) || b > 100000000)
		if (!(a == 1000000000) || b == 123456789)
			a /= 10;
		_putchar('0' + b / a);
		while (a != 10)
		{
			a /= 10;
			_putchar('0' + (b / a) % 10);
		}
		_putchar('0' + b % 10);
	}
}
