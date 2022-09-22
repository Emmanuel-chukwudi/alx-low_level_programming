#include "main.h"

/**
 * leet - encodes a string into 1337
 * @c: string to manipulate
 * Return: Always 0 (Success)
 */

char *leet(char *c)
{
	int d[11] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int q[11] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	int f;
	int w;

	for (w = 0; c[w] != '\0'; w++)
	{
		for (f = 0; d[f] != '\0'; f++)
		{
			if (c[w] == d[f])
			{
				c[f] = q[f];
			}
		}
	}

	return (c);
}
