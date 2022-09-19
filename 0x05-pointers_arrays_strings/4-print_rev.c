#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse, 
 * followed by a new line
 *
 * @s: parameter
 *
 * Return: Always 0 (Success)
 */

void print_rev(char *s)
{
	int rev_str = 0;
	int a;

	for (rev_str = 0; s[rev_str] != '\0'; rev_str++)
	{
		continue;
	}
	for (a = rev_str - 1; a >= 0; a--)
	{
		_putchar(s[a]);
	}
	_putchar('\n');
}
