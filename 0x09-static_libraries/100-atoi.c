#include "main.h"

/**
 *  _atoi - converts string to an integer
 * @s: a string
 * Return: Always 0 (Success)
 */

int _atoi(char *s)
{
	int a = 1;
	unsigned int t = 0;
	char null_flag = 0;

	while (*s)
	{
		if (*s == '-')
		{
			a *= -1;
		}
		if (*s >= '0' && *s <= '9')
		{
			null_flag = 1;
			t = t * 10 + *s - '0';
		}

		else if (null_flag)
		{
			break;
		}
		s++;
	}

	if (a < 0)
	{
		t = (-t);
	}

	return (t);
}
