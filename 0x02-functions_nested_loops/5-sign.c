#include "main.h"
/**
 * print_sign - prints sign
 * @n: number to be checked
 *
 * Return: -1 ffor negative 1 for positive and 0 for any other thing
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}

	else

	{
		_putchar(48);
		return (0);
	}
}
