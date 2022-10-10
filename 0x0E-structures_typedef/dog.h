#ifndef DOG_H
#define DOG_H

/**
 * main - creating a new struct dog
 *
 * Return: Always 0 (Success)
 */

struct dog
{
	char name;
	float age;
	char owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

#endif /* DOG_H */
