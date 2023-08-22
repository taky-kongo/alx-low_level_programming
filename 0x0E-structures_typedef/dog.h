#ifndef __DOG_H__
#define __DOG_H__

#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

/**
 * struct dog - a new struct dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Description: a new struct of the dog with the name, the age and the owner
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
