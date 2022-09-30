#include "main.h"

/**
 * _memset - A function that fills memory with normal byte
 * @n: number of byte
 * @s: pointer to memory area
 * @b: constant byte
 * Return: pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int size = n;

	if (size > 0)
	{
		int a;

		for (a = 0; a < size; a++)
		{
			s[a] = b;
		}
	}

	return (s);
}
