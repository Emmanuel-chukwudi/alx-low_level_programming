#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - A function that prints a struct dog
 * @d: passing the struct to func
 * Return: Always 0 (Success)
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if ((*d).name != NULL)
		{
			printf("Name: %s\n", (*d).name);
		}
		else
		{
			printf("Name: (nil)\n");
		}

		if (d->name != NULL)
		{
			printf("Age: %f\n", d->age);
		}
		else
		{
			printf("Age: (nil)\n");
		}

		if (d->owner != NULL)
		{
			printf("Owner: %s\n", (*d).owner);
		}
		else
		{
			printf("Owner: (nil)\n");
		}
	}
}

