#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - A func that allocates mem of an array
 * @nmemb: string
 * @size: sting size
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{

	char *c;
	unsigned int a;


	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	c = malloc(nmemb * size);

	if (c == NULL)
	{
		return (NULL);
	}

	for (a = 0; a < (nmemb * size); a++)
	{
		c[a] = 0;
	}
	return (c);
}
