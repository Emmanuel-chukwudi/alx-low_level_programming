#include "main.h"

/**
 * puts_half - a function that prints half of a string, followed by a new line
 *
 * @str: string
 * Return: Always 0 (Success)
 */

void puts_half(char *str)
{
	int b;

	for (b = 0; str[b] != '\0'; b++)
	{
		b++;
	}
	for (b /= 2; str[b] != '\0'; b++)
	{
		_putchar(str[b]);
	}
	_putchar('\n');
}
