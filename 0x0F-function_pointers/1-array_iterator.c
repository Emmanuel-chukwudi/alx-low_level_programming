#include "function_pointers.h"

/**
 * void_iterator - A function that executes a func
 * @array: array to work with
 * @size: size of the array
 * @action: pointer to a function
 * Return: Always 0 (Success)
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && size && action)
	{
	for (i = 0; i < size; i++)
		action(*(array + i));
	}
}
