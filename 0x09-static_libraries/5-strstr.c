#include "main.h"
#define NULL 0

/**
 * _strstr - A function that locates a substring
 * @haystack: string
 * @needle: substring
 * Return: pointer to the beginning of thr located substring
 */

char *_strstr(char *haystack, char *needle)
{
	int a = 0, b, c;

	if (needle[0] == '\0')
	{
		return (haystack);
	}
	while (haystack[a] != '\0')
	{
		if (haystack[a] == needle[0])
		{
			c = a, b = 0;
			while (needle[b] != '\0')
			{
				if (haystack[c] == needle[b])
				{
					c++, b++;
				}
				else
				{
					break;
				}
			}
			if (needle[b] == '\0')
			{
				return (haystack + a);
			}
		}
		a++;
	}
	return (NULL);
}
