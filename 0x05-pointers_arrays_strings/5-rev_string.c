#include "main.h"

/**
 * rev_string - a function that reverses a string
 * @s: string
 *
 * Return: Always 0 (Success)
 */

void rev_string(char *s)
{
	int index = 0;
	int rev_index;
	int a;
	int rev_str;

	for (rev_str = 0; s[rev_str] != '\0'; rev_str++)
	{
		continue;
	}
	rev_index = rev_str - 1;

	while (index != rev_index && index < rev_index)
	{
		a = s[index];
		s[index] = s[rev_index];
		s[rev_index] = a;
		index++;
		rev_index--;
	}
}
