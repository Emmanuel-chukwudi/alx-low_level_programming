#include "main.h"

/**
 * main - This writes a function that prints the alphabet,
 * in lowercase, followed by a new line
 *
 * Return: Always 0 (Success)
 */

void print_alpahbet(void);
{
	char q;

	for (q = 'a'; q <= 'z'; q++)
	{
		_putchar(q);
	}
	_putchar('\n');
}
