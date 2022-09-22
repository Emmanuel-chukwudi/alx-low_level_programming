#include "main.h"

/**
 * leet - encodes a string into 1337
 * @c: string to manipulate
 * Return: Always 0 (Success)
 */

char *leet(char *c)
{
	char d[] = "aAeEoOtTlL";
	char q[] = "4433007711";

	int f = 0;
	int w;

	for (; c[f] != '\0'; f++)
	{
		for (w = 0; w <= 9; w++)
		{
			if (d[w] == c[f])
			{
				c[f] = q[w];
			}
		}
	}
	return (c);
}

