#include "dog.h"

/**
 * print_dog - that prints a struct dog
 * @d:
 *
 * Return: nothing is d is NULL.
 * If an element of d is NULL, print (nil) instead of this element.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);
	if (d->age == 0)
		printf("Age: %f\n", d->age);
	else
		printf("Age: %f\n", d->age);
	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
