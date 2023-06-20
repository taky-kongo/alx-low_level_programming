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
	int i = 0, j = 0;

	new = malloc(sizeof(dog_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	while (name[i] != '\0')
		i++;
	while (owner[j] != '\0')
		j++;
	new->name = malloc(sizeof(char) * i);
	if (new->name == NULL)
	{
		free(new);
		return (NULL);
	}

	new->owner = malloc(sizeof(char) * j);
	if (new->owner == NULL)
	{
		free(new->name);
		free(new);
	}
	new->name = name;
	new->age = age;
	new->owner = owner;
	return (new);
}
