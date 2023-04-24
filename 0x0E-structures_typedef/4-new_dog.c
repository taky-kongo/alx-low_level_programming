#include "dog.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * new_dog - a function that creates a new dog.
 *
 * @name: name of the new dog
 * @age: age
 * @owner: owner
 *
 * Return: NULL if the function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
	{
		free(d);
		return (NULL);
	}
	d->name = name;
	d->owner = owner;
	d->age = age;
	free(d);
	return (d);
}
