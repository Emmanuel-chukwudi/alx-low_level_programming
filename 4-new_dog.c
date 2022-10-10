#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - A func that creates a new dog
 * @name: user name
 * @age: user age
 * @owner: user
 * Return: NULL if it fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *n_dog;

	n_dog = malloc(sizeof(dog_t));

	if (n_dog == NULL)
	{
		return (NULL);
	}

	if (name == NULL)
	{
		free(n_dog);
		free(owner);
		return (n_dog);
	}

	if (owner == NULL)
	{
		free(n_dog);
		free(name);
		return (n_owner);
	}

	(*n_dog).name = name;
	n_dog->age = age;
	(*n_dog).owner = owner;

	return (n_dog);
}
