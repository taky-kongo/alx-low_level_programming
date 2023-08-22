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
		printf("(nil)");
	else
		printf("%s\n", d->name);
	printf("%f\n", d->age);
	if (d->owner == NULL)
		printf("(nil)");
	else
		printf("%s\n", d->owner);
}
