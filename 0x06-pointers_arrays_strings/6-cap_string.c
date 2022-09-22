#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @c: word to be capitalized
 * Return: Always 0 (Success)
 */

char *cap_string(char *c)
{
	int a = 0;

	while (c[a] != '\0')
	{
		if ((c[a] >= 'a' && c[a] <= 'z') && (c[a - 1] == ',' || c[a - 1] == ';' || c[a - 1] == '.' || c[a - 1] == '!' || c[a - 1] == '?' || c[a - 1] == '"' || c[a - 1] == '(' || c[a - 1] == ')' || c[a - 1] == '{' || c[a - 1] == '}' || c[a - 1] == ' ' || c[a - 1] == '\t' || c[a - 1] == '\n'))
		{
			c[a] = c[a] - 'a' + 'A';
		}
		a++;
	}

	return (c);
}

