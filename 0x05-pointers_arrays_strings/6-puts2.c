#include "main.h"

/**
 * puts2 - prints the even index of a string
 * @str: string
 *
 * Return: Always 0 (Success)
 */

void puts2(char *str)
{
	int a = 0;

	if ((str[a] != '\0') && (a % 2 == 0))
	{
		_putchar(str[a]);
		a++;
	}

	_putchar('\n');
}

