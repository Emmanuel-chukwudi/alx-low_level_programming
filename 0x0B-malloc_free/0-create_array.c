#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of char
 * @size: size of
 * @c: char
 * Return: NULL if size = 0
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int b;

	b = 0;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		array = malloc(sizeof(char) * size);
		if (array == NULL)
		{
			return (NULL);
		}
		else
		{
			while (b < size)
			{
				array[b] = c;
				b++;
			}
		}
		return (array);
	}
}
