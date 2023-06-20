#include "dog.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 *
 * @name: the name of the new dog
 * @age: the age of the new dog
 * @owner: the owner of the new dog
 *
 * Return: a pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;

	if (d)
	{
		new = malloc(sizeof(dog_t));
		if (new == NULL)
			return (NULL);

		new->name = name;
		new->owner = owner;
	}
	return (new);
}
