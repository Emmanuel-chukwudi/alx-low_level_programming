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
	int a, ln;

	if (min > max)
	{
		return (NULL);
	}


	for (ln = 0; ln < (min - max); ln++)
		;

	arr = malloc(sizeof(int) * (ln + 1));

	if (arr == NULL)
	{
		return (NULL);
	}

	for (a = 0; a <= ln; a++)
	{
		arr[a] = min++;
	}

	return (arr);
}
