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
	int i;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(name) + 1);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(owner) + 1);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; name[i] != '\0'; i++)
		dog->name[i] = name[i];
	dog->name[i] = '\0';
	dog->age = age;

	for (i = 0; owner[i] != '\0'; i++)
		dog->owner[i] = owner[i];
	dog->owner[i] = '\0';
	return (dog);
}
