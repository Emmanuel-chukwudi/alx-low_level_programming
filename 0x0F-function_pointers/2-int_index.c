#include "function_pointers.h"

/**
 * int_index - A func that searches for an int
 * @array: an array
 * @size: size of the array
 * @cmp: func pointer
 * Return: Always 0 (Success)
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(*(array + i)))
			return (i);
	}

	return (-1);
}
