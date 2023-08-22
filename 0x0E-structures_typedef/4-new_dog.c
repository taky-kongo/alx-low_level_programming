#include "dog.h"

/**
 * new_dog - a function that creates a new dog.
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Return: NULL if the function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	char *d_name;
	char *d_owner;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	d_name = strdup(name);
	if (d_name == NULL)
	{
		free(dog);
		return (NULL);
	}
	d_owner = strdup(owner);
	if (d_owner == NULL)
	{
		free(d_name);
		free(dog);
		return (NULL);
	}
	dog->name = d_name;
	dog->age = age;
	dog->owner = d_owner;

	return (dog);
}
