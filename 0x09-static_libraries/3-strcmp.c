#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: string one
 * @s2: string two
 * Return: Always 0 (Success)
 */

int _strcmp(char *s1, char *s2)
{
	int a = 0;

	while ((s1[a] == s2[a]) && (s1[a] != '\0'))
	{
		a++;
	}
	return (s1[a] - s2[a]);
}
