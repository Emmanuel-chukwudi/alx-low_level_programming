#include "main.h"

/**
 * *_strcpy -  a function ...
 * @dest: string
 * @src: string
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int y = -1;

	do {
		y++;
		dest[y] = src[y];
	} while (src[y] != '\0');
	return (dest);
}

