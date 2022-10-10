#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_dog - A function that frees dogs
 * @d: passing a struct to the func
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free((*d).name);
		free((*d).owner);
		free(d);
	}
}
