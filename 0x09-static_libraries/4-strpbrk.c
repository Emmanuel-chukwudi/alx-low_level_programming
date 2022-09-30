#include "main.h"
#define NULL 0

/**
 * _strpbrk - A function that searches a string for any of a set of bytes
 * @s: string
 * @accept: bytes in string
 * Return: a pointer to the byte in s
 */

char *_strpbrk(char *s, char *accept)
{
	int a = 0, b;

	while (s[a] != '\0')
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
			{
				s = &s[a];
				return (s);
			}
		}
		a++;
	}
	return (NULL);
}
