#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees dogs
 *
 * @d: the structure dog
 */
void free_dog(dog_t *d)
{
	free(d);
}
