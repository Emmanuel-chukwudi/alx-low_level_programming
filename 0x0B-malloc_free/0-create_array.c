#include "main.h"


/**
 * create_array - creates an array of char
 * @c: char
 *
 * Return: NULL if size = 0
 */

char *create_array(unsigned int size, char c)
{
	char *array;

	if (!size)
	{
		return (NULL);
	}

	array = (char *) malloc(sizeof(char) * size);
	if (array)
	{
		while (size > 0)
		{
			array[--size] = c;
		}
	}
	return (array);
}


