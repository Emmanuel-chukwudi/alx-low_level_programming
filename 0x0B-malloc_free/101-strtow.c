#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* **strtow - A function that splits a string into words.
* @str : pointer
* Return: NULL if str == NULL or ""
*/

char **strtow(char *str)
{
	char **x;
	int a;
	int b = 0;
	int con = 0;

	if (str == NULL)
		return (NULL);

	for (a = 0 ; str[a] != '\0' ; a++)
	{
		if (str[a] != 32)
			con++;
	}

	x = malloc(sizeof(char) * con);

	if (x == NULL)
		return (NULL);

	for (a = 0 ; str[a] != '\0' ; a++)
	{
		if (str[a] != 32)
		{
			*x[b] = str[b];
			b++;
		}
		else
		{
		}
	}
	return (x);
}
