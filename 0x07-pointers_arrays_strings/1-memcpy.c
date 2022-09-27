#include "main.h"

/**
 * _memcpy - a function that copies memory area
 * @dest: memory
 * @src: memory area
 * @n: bytes
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int size = n;

	for (size > 0)
	{
		int a;

		for (a = 0; a < sizs; a++)
		{
			dest[a] = src[a];
		}
	}

	return (dest);
}
