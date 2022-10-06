#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - A func that realloc a mem block
 * @ptr: pointer
 * @old_size: old size of mem
 * @new_size: new size of mem
 * Return: pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p, *p2;
	unsigned int a;

	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
	{
		return (ptr);
	}

	if (ptr == NULL)
	{
		p = malloc(new_size);
		return (p);
	}

	if (new_size > old_size)
	{
		p = malloc(sizeof(char) * new_size);
		p2 = ptr;

	for (a = 0; a < old_size; a++)
	{
		p[a] = p2[a];
	}
	free(ptr);
	return (p);
	}
	return (ptr);
}
