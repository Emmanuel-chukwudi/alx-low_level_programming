#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * init_dog - A func that initialize a var of type struct dog
 * @d: passing the struct to func
 * @name: user name in char
 * @owner: user in char
 * @age: user age in int
 *
 * Return: Always 0 (Success)
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
