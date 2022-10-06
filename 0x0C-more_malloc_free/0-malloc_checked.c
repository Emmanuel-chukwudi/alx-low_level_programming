#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - A function that allocates mem using malloc
 * @b: memory input
 * Return: pointer
 */

void *malloc_checked(unsigned int b)
{
	void *a = malloc(b);

	if (a == NULL)
	{
		exit(98);
	}

	return (a);
}
