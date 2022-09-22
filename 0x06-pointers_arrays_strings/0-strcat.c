#include "main.h"

/**
 * _strcat - a function that concatenates two strings
 * @src: string to link
 * @dest: string to link
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	while (src[b] != '\0')
	{
		dest[a] = src[j];
		a++;
		b++;
	}
	dest[a] = '\0';

	return (dest);
}

