#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @c: string
 * Return: c
 */

char *rot13(char *c)
{
	char p[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char q[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	int a = 0;
	int b;

	while (*(c + a) != '\0')
	{
		for (b = 0; b < 52; b++)
		{
			if (*(c + a) == p[b])
			{
				*(c + a) = q[b];
				break;
			}
		}
		a++;
	}
	return (c);
}
