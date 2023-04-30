#include "dog.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * free_dog - a function that frees dogs.
 *
 * @d: the argument
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
