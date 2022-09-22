#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @c: word to be capitalized
 * Return: Always 0 (Success)
 */

char *cap_string(char *c)
{
	int a = 0;

	while (c[a])
	{
		while (!(c[a] >= 'a' && c[a] <= 'z'))
		{
			a++;
		}
		if (c[a - 1] == ' ' ||
				c[a - 1] == '\t' ||
				c[a - 1] == '\n' ||
				c[a - 1] == ',' ||
				c[a - 1] == ';' ||
				c[a - 1] == '.' ||
				c[a - 1] == '!' ||
				c[a - 1] == '?' ||
				c[a - 1] == '"' ||
				c[a - 1] == '(' ||
				c[a - 1] == ')' ||
				c[a - 1] == '{' ||
				c[a - 1] == '}' ||
				c == 0)
			c[a] -= 32;

		a++;
	}

	return (c);
}


