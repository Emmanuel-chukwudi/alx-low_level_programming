#include "main.h"
#include <stdio.h>

/**
 * _puts - This writes a function that prints a string,
 *  followed by a new line, to stdout
 *
 *  @str: string
 *
 *  Return: Always 0 (Success)
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
