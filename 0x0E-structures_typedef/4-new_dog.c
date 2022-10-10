#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - A func that creates a new dog
 * @name: name of user
 * @age: user age
 * @owner: user
 * Return: NULL if func fails
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
		return (NULL);
	}

	if (owner == NULL)
	{
		free(n_dog);
		free(name);
		return (NULL);
	}
	n_dog->name = name;
	n_dog->age = age;
	n_dog->owner = owner;

	return (n_dog);
}

