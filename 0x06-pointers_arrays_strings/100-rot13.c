#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @c: string
 * Return: c
 */

char *rot13(char *c)
{
	char p[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char q[] = "nopqrstuvwxyzabcdefghijklmnopQRSTUVWXYZABCDEFGHIJKLM";

	int a;
	int b;

	for (b = 0; c[b] != '\0'; b++)
	{
		a = 0;
		while (p[a] != '\0' && c[b] != p[a])
		{
			a++;
		}

		if (c[b] == p[a])
		{
			c[b] = q[a];
		}
	}

	return (c);
}
