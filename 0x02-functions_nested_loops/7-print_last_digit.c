#include "main.h"

/**
 * print_last_digit - This will prints the last digit of a number
 *
 * @n: The number to be treated
 *
 * Return: Value of the last digi
 */

int print_last_digit(int n)
{

	int last = n % 10;

	if (last < 10)
	{
		last *= -1;
	}
	_putchar(last + '0');

	return (last);
}
