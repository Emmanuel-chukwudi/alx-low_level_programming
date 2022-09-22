#include "main.h"

/**
 * _strncat - concatenates two strings using n bytes 
 * @src: string to link
 * @dest: sting to be linked
 * @n: number of bytes
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	while (src[b] != src[n])
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';

	return (dest);
}
