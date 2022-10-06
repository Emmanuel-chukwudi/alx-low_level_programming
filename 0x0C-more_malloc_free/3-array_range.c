#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - A function that crates an array of int
 * @min: minimum number
 * @max: maximum number
 * Return: pointer
 */

int *array_range(int min, int max)
{
	int *arr;
	int a, l;

	ln = (max - min) + 1;

	if (min > max)
	{
		return (NULL);
	}


	arr = malloc(sizeof(int) * ln);

	if (arr == NULL)
	{
		return (NULL);
	}

	for (a = 0; min <= max; a++)
	{
		arr[a] = min++;
	}

	return (arr);
}
