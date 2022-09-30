#include "main.h"
#define NULL 0

/**
 * _strchr - a function that locates a character in sting
 * @s: string
 * @c: character
 * Return: Always 0 (Success)
 */

char *_strchr(char *s, char c)
{
	int a = 0;

	while (s[a] != '\0' && s[a] != c)
	{
		a++;
	}
	if (s[a] == c)
	{
		return (&s[a]);
	}
	else
	{
		return (NULL);
	}
}
