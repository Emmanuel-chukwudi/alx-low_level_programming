#include "main.h"

/**
 * _strspn - A function that gets the length of a prefix substring
 * @s: bytes of initial segment
 * @accept: bytes
 * Return: number of matched bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int a = 0, b;
	int m = 0; /* matched bytes */

	while (s[a] != '\0')
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
			{
				m++;
				break;
			}
			if (accept[b + 1] == '\0' && s[a] != accept[b])
			{
				return (m);
			}
		}
		a++;
	}
	return (m);
}
