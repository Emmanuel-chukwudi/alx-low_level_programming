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
	char *array, unsigned int a;

	a = 0;

	if (size == 0)
	{
		return ('\0');
	}
	else
	{
		array = malloc(sizeof(char) * size);
		if (array == '\0')
		{
			return ('\0');
		}
		else
		{
			while (a < size)
			{
				array[a] = c;
				a++;
			}
		}
		return (array);
	}
}
