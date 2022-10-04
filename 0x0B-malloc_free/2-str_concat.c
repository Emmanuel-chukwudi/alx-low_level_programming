#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatenates strings
 * @s1: first string
 * @s2: second string
 * Return: returns NULL if str = NULL
 */
char *str_concat(char *s1, char *s2)
{
	int a, l1, l2;
	char *c;

	a = 0;
	l1 = 0;
	l2 = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[a] != '\0')
	{
		a++;
		l1++;
	}

	a = 0;

	while (s2[a] != '\0')
	{
		a++;
		l2++;
	}

	c = malloc(sizeof(char) * (l1 + l2 + 1));
	if (c == NULL)
		return (NULL);

	for (a = 0; a < l1; a++)
	{
		c[a] = s1[a];
	}

	for (a = 0; a < l2; a++)
	{
		c[a + l1] = s2[a];
	}
	c[a + l1] = '\0';
	return (c);
}
