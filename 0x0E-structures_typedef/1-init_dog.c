#include "dog.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * init_dog - a function that initialize a variable of type struct dog
 *
 * @name: name of the dog
 * @d: a pointer of the struct
 * @age: age of the dog
 * @owner: owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		exit(0);
	d->name = name;
	d->age = age;
	d->owner = owner;
}
