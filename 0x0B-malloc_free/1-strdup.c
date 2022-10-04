#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - A function that returns a pointer to a mem
 * @str: string
 * Return: NULL if string = NULL
 */

char *_strdup(char *str)
{
	int x = 0, y = 1;
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[y])
	{
		y++;
	}

	s = malloc((sizeof(char) * y) + 1);

	if (s == NULL)
	{
		return (NULL);
	}
	while (x < y)
	{
		s[x] = str[x];
		x++;
	}
	s[x] = '\0';
	return (s);
}
