#include "main.h"

/**
 * string_toupper - converts lower case letters to upper case
 * @c: string to convert
 * Return: upper case string
 */

char *string_toupper(char *c)
{
	int b = 0;

	for (b = 0; c[b] != '\0'; b++)
	{
		if (c[b] >= 'a' && c[b] <= 'z')
		{
			c[b] = c[b] - ('a' + 'A');
		}
	}
	return (c);
}
