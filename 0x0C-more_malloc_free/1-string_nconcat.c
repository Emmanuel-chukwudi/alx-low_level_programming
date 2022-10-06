#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - A function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: length of string
 * Return: pointer to a new space in mem
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int l1, a, b;
	char *c;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	l1 = 0;

	while (s1[l1])
	{
		l1++;
	}

	c = malloc(sizeof(*c) * l1 + n + 1);

	if (c == NULL)
	{
		return (NULL);
	}

	for (a = 0, b = 0; a < (l1 + n); a++)
	{
		if (a < l1)
		{
			c[a] = s1[a];
		}
		else
		{
			c[a] = s2[b++];
		}
	}
	c[a] = '\0';
	return (c);
}
