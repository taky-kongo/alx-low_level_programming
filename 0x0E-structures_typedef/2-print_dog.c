#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - a function that prints a struct dog
 *
 * @d: a pointer
 */
void print_dog(struct dog *d)
{
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";
	if (d != NULL)
		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
	else
		return;
}
